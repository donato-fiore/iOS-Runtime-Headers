// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HDAGGREGATIONSTATEKEY_H
#define _HDAGGREGATIONSTATEKEY_H

@class NSString, HKDevice;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _HDAggregationStateKey : NSObject <NSCopying>

 {
    NSString *_collectorIdentifier;
    HKDevice *_device;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif