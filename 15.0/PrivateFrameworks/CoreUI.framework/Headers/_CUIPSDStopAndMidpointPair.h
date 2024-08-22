// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CUIPSDSTOPANDMIDPOINTPAIR_H
#define _CUIPSDSTOPANDMIDPOINTPAIR_H


#import <Foundation/Foundation.h>


@interface _CUIPSDStopAndMidpointPair : NSObject {
    id *stop;
    CGFloat midpoint;
}




-(CGFloat)midpoint;
-(NSInteger)compare:(id)arg0 ;
-(id)initWithStop:(id)arg0 midpoint:(id)arg1 ;
-(id)stop;
-(void)dealloc;


@end


#endif