// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNCOREDELEGATEINFO_H
#define CNCOREDELEGATEINFO_H

@class NSString, NSNumber, NSPersonNameComponents;
@protocol NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CNCoreDelegateInfo : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *altDSID; // ivar: _altDSID
@property (readonly, copy, nonatomic) NSString *appleID; // ivar: _appleID
@property (readonly, copy, nonatomic) NSNumber *dsid; // ivar: _dsid
@property (readonly, nonatomic) BOOL isMe; // ivar: _isMe
@property (readonly, copy, nonatomic) NSPersonNameComponents *nameComponents; // ivar: _nameComponents
@property (readonly, copy, nonatomic) NSString *principalPath; // ivar: _principalPath


+(BOOL)supportsSecureCoding;
+(id)hardCodedPrincipalPathForDSID:(id)arg0 ;
+(id)nameComponentsForFamilyMember:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_hardCodedPrincipalPathForFamilyMember:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithAltDSID:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDSID:(id)arg0 altDSID:(id)arg1 appleID:(id)arg2 principalPath:(id)arg3 nameComponents:(id)arg4 isMe:(BOOL)arg5 ;
-(id)initWithFamilyMember:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif