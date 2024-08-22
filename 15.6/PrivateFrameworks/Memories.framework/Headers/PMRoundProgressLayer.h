// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PMROUNDPROGRESSLAYER_H
#define PMROUNDPROGRESSLAYER_H

@class CALayer;



@interface PMRoundProgressLayer : CALayer

@property (nonatomic) CGFloat progress;


+(BOOL)needsDisplayForKey:(id)arg0 ;
-(void)drawInContext:(struct CGContext *)arg0 ;


@end


#endif