// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSAPDFTAGGERDRAWABLECONTEXT_H
#define TSAPDFTAGGERDRAWABLECONTEXT_H

@class TSDRep;


#import "TSAPdfTaggerContext.h"
#import "TSAPdfTaggerState.h"

@interface TSAPdfTaggerDrawableContext : TSAPdfTaggerContext

@property (readonly, nonatomic) TSDRep *drawableRep; // ivar: _drawableRep
@property (retain, nonatomic) TSAPdfTaggerState *taggerStateOutsideCore; // ivar: _taggerStateOutsideCore


-(id)initWithStateOfTagger:(id)arg0 drawableRep:(id)arg1 ;


@end


#endif