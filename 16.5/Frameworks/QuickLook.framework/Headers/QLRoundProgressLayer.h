// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QLROUNDPROGRESSLAYER_H
#define QLROUNDPROGRESSLAYER_H

@class CALayer;



@interface QLRoundProgressLayer : CALayer

@property (nonatomic) CGFloat progress;


+(BOOL)needsDisplayForKey:(id)arg0 ;
-(BOOL)needsDisplayOnBoundsChange;
-(id)initWithLayer:(id)arg0 ;


@end


#endif