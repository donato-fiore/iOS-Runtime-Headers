// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TAEVENTBUFFERSETTINGS_H
#define TAEVENTBUFFERSETTINGS_H


#import <Foundation/Foundation.h>


@interface TAEventBufferSettings : NSObject

@property (readonly, nonatomic) NSUInteger bufferCapacity; // ivar: _bufferCapacity
@property (readonly, nonatomic) CGFloat bufferTimeIntervalOfRetention; // ivar: _bufferTimeIntervalOfRetention


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBufferCapacity:(NSUInteger)arg0 bufferTimeIntervalOfRetention:(CGFloat)arg1 ;
-(id)initWithBufferCapacityOrDefault:(id)arg0 bufferTimeIntervalOfRetentionOrDefault:(id)arg1 ;


@end


#endif