// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AEPROGRESSINDICATORVIEW_H
#define AEPROGRESSINDICATORVIEW_H

@class PLRoundProgressView, NSProgress;



@interface AEProgressIndicatorView : PLRoundProgressView

@property (readonly, nonatomic) NSProgress *_progress; // ivar: __progress


-(id)initWithFrame:(struct CGRect )arg0 progress:(id)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif