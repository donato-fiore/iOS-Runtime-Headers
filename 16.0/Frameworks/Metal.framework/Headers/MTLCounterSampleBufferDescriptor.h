// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLCOUNTERSAMPLEBUFFERDESCRIPTOR_H
#define MTLCOUNTERSAMPLEBUFFERDESCRIPTOR_H

@class NSString;
@protocol NSCopying, MTLCounterSet;

#import <Foundation/Foundation.h>


@interface MTLCounterSampleBufferDescriptor : NSObject <NSCopying>



@property (retain) NSObject<MTLCounterSet> *counterSet;
@property (copy) NSString *label;
@property NSUInteger sampleCount;
@property NSUInteger storageMode;


+(id)alloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif