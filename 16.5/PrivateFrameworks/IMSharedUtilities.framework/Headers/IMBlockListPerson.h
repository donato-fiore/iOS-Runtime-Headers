// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMBLOCKLISTPERSON_H
#define IMBLOCKLISTPERSON_H

@class NSString, CNContact;

#import <Foundation/Foundation.h>


@interface IMBlockListPerson : NSObject

@property (retain, nonatomic) NSString *cachedCompanyName; // ivar: _cachedCompanyName
@property (retain, nonatomic) NSString *cachedFullName; // ivar: _cachedFullName
@property (readonly, nonatomic) CNContact *cnPerson; // ivar: _cnPerson
@property (readonly, nonatomic) NSString *fullName;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier


+(id)personWithCNContact:(id)arg0 ;
-(BOOL)isEqualToPerson:(id)arg0 ;
-(BOOL)isInAddressBook;
-(id)companyName;
-(id)init;
-(id)initWithCNContact:(id)arg0 ;
-(id)sanitizeString:(id)arg0 ;


@end


#endif