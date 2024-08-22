// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFDEVICECONTEXTMETADATA_H
#define AFDEVICECONTEXTMETADATA_H

@class NSMutableDictionary, NSDate, NSArray, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "AFDeviceContextHistoryConfiguration.h"

@interface AFDeviceContextMetadata : NSObject <NSCopying, NSSecureCoding>

 {
    NSMutableDictionary *_backingStore;
}


@property (readonly, nonatomic) NSDate *deliveryDate; // ivar: _deliveryDate
@property (readonly, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly, nonatomic) AFDeviceContextHistoryConfiguration *historyConfiguration; // ivar: _historyConfiguration
@property (readonly, nonatomic) NSArray *redactedKeyPaths; // ivar: _redactedKeyPaths
@property (readonly, nonatomic) NSString *type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isExpiredByDate:(id)arg0 ;
-(NSUInteger)hash;
-(id)backingStore;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithBackingStore:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(id)arg0 deliveryDate:(id)arg1 expirationDate:(id)arg2 redactedKeyPaths:(id)arg3 historyConfiguration:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif