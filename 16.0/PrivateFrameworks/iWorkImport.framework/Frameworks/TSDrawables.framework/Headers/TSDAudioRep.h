// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDAUDIOREP_H
#define TSDAUDIOREP_H



#import "TSDMediaRep.h"
#import "TSDMovieInfo.h"

@interface TSDAudioRep : TSDMediaRep

@property (readonly, nonatomic) TSDMovieInfo *movieInfo;


-(id)initWithLayout:(id)arg0 canvas:(id)arg1 ;
-(struct CGRect )clipRect;
-(void)drawInContext:(struct CGContext *)arg0 ;
-(void)drawInContextWithoutEffects:(struct CGContext *)arg0 withContent:(BOOL)arg1 strokeDrawOptions:(NSUInteger)arg2 withOpacity:(BOOL)arg3 forAlphaOnly:(BOOL)arg4 drawChildren:(BOOL)arg5 keepingChildrenPassingTest:(id)arg6 ;
-(void)willBeRemoved;


@end


#endif