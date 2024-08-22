// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ODIPYRAMID_H
#define ODIPYRAMID_H


#import <Foundation/Foundation.h>


@interface ODIPyramid : NSObject



+(BOOL)mapIdentifier:(id)arg0 state:(id)arg1 ;
+(BOOL)verticalFlipWithState:(id)arg0 ;
+(NSUInteger)nodeCountWithState:(id)arg0 ;
+(void)addTrapezoidForNode:(id)arg0 top:(float)arg1 height:(float)arg2 topBase:(float)arg3 bottomBase:(float)arg4 state:(id)arg5 ;
+(void)mapWithState:(id)arg0 apexUp:(BOOL)arg1 ;


@end


#endif