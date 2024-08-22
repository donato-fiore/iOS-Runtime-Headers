// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKCLINICALSHARINGSYNCRESULT_H
#define HKCLINICALSHARINGSYNCRESULT_H

@class NSUUID, NSError, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKClinicalSharingSyncResult : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSUUID *accountID; // ivar: _accountID
@property (readonly, copy, nonatomic) NSError *error; // ivar: _error
@property (readonly, copy, nonatomic) NSString *lookupInfo; // ivar: _lookupInfo


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithAccountID:(id)arg0 error:(id)arg1 ;
-(id)initWithAccountID:(id)arg0 lookupInfo:(id)arg1 ;
-(id)initWithAccountID:(id)arg0 lookupInfo:(id)arg1 error:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif