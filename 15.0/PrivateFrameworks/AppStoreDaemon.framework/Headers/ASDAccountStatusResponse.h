// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASDACCOUNTSTATUSRESPONSE_H
#define ASDACCOUNTSTATUSRESPONSE_H

@class NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ASDAccountStatusResponse : NSObject <NSSecureCoding>



@property (retain) NSNumber *accountID; // ivar: _accountID
@property NSInteger accountStatus; // ivar: _accountStatus
@property BOOL hasCachedFamilyInfo; // ivar: _hasCachedFamilyInfo
@property (readonly) BOOL hasErrorStatus;


+(BOOL)supportsSecureCoding;
-(BOOL)hasResponseFlag:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAccountID:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif