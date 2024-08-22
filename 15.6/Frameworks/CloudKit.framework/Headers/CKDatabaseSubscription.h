// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDATABASESUBSCRIPTION_H
#define CKDATABASESUBSCRIPTION_H

@class NSString;
@protocol NSSecureCoding, NSCopying;


#import "CKSubscription.h"

@interface CKDatabaseSubscription : CKSubscription <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *recordType;


+(BOOL)supportsSecureCoding;
+(id)new;
-(id)CKPropertiesDescription;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSubscriptionID:(id)arg0 ;


@end


#endif