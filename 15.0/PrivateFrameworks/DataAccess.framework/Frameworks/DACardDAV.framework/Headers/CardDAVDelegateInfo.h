// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CARDDAVDELEGATEINFO_H
#define CARDDAVDELEGATEINFO_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface CardDAVDelegateInfo : NSObject

@property (retain, nonatomic) NSString *altDSID; // ivar: _altDSID
@property (retain, nonatomic) NSString *appleID; // ivar: _appleID
@property (retain, nonatomic) NSNumber *dsid; // ivar: _dsid
@property (retain, nonatomic) NSString *principalPath; // ivar: _principalPath


+(id)altDSIDForAccount:(id)arg0 ;
+(id)appleIDForAccount:(id)arg0 ;
+(id)dsidForAccount:(id)arg0 ;
+(id)hardCodedPrincipalPathForDSID:(id)arg0 ;
-(id)_hardCodedPrincipalPathForFamilyMember:(id)arg0 ;
-(id)initWithFamilyMember:(id)arg0 ;
-(void)setPropertiesOnAccount:(id)arg0 ;


@end


#endif