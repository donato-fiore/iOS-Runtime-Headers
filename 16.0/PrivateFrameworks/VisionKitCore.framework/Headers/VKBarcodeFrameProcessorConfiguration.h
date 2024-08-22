// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VKBARCODEFRAMEPROCESSORCONFIGURATION_H
#define VKBARCODEFRAMEPROCESSORCONFIGURATION_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface VKBarcodeFrameProcessorConfiguration : NSObject <NSCopying>



@property (nonatomic) CGPoint comparisonPoint; // ivar: _comparisonPoint
@property (nonatomic) BOOL isForSingleItem; // ivar: _isForSingleItem
@property (copy, nonatomic) NSArray *symbologies; // ivar: _symbologies


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToBarcodeFrameProcessorConfiguration:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif