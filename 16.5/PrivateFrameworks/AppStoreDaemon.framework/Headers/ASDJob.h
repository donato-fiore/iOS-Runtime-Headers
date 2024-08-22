// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASDJOB_H
#define ASDJOB_H

@class NSString, NSNumber, NSError;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ASDJob : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (copy, nonatomic) NSNumber *externalOrderKey; // ivar: _externalOrderKey
@property (copy, nonatomic) NSError *failureError; // ivar: _failureError
@property (copy, nonatomic) NSNumber *orderKey; // ivar: _orderKey
@property (nonatomic) CGFloat percentComplete; // ivar: _percentComplete
@property (nonatomic) NSInteger persistentID; // ivar: _persistentID
@property (nonatomic) NSInteger phase; // ivar: _phase
@property (nonatomic) NSInteger purchaseID; // ivar: _purchaseID
@property (nonatomic) NSInteger storeItemID; // ivar: _storeItemID
@property (nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPersistentID:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif