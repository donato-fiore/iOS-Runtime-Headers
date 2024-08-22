// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDPATHFILLER_H
#define TSDPATHFILLER_H



#import "TSDPathStroker.h"

@interface TSDPathFiller : TSDPathStroker



-(id)initWithProperties:(id)arg0 bundle:(id)arg1 dataManager:(*void)arg2 precedingStroker:(id)arg3 ;
-(void)strokePath:(struct CGPath *)arg0 inContext:(struct CGContext *)arg1 inColor:(id)arg2 ;


@end


#endif