// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNMPUTILS_H
#define VNMPUTILS_H


#import <Foundation/Foundation.h>


@interface VNMPUtils : NSObject



+(CGFloat)getHostTime;
+(NSInteger)parseExifTimestamp:(id)arg0 ;
+(NSUInteger)getHostTimeInNanos;
+(id)createErrorWithCode:(NSInteger)arg0 andMessage:(id)arg1 ;
+(void)freeVImageBuffer:(struct vImage_Buffer *)arg0 ;


@end


#endif