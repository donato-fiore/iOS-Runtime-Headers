// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OKPRESENTATIONCOUCH_H
#define OKPRESENTATIONCOUCH_H

@class NSMutableDictionary, NSString, NSMutableArray;


#import "OKPresentationCanvas.h"
#import "OKPresentationCouchStep.h"

@interface OKPresentationCouch : OKPresentationCanvas {
    NSMutableDictionary *_internalSettings;
}


@property (retain, nonatomic) OKPresentationCouchStep *loopStep; // ivar: _loopStep
@property (copy, nonatomic) NSString *restartScript; // ivar: _restartScript
@property (readonly, copy, nonatomic) NSMutableArray *steps; // ivar: _steps


+(id)couchWithName:(id)arg0 settings:(id)arg1 steps:(id)arg2 restartScript:(id)arg3 ;
-(CGFloat)duration;
-(id)canvasWithName:(id)arg0 ;
-(id)closestStepForPageName:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionary;
-(id)init;
-(id)initWithDictionary:(id)arg0 andName:(id)arg1 forPresentation:(id)arg2 ;
-(id)lastStepForPageName:(id)arg0 ;
-(id)nextStepAfterStep:(id)arg0 canLoop:(BOOL)arg1 ;
-(void)addStep:(id)arg0 ;
-(void)dealloc;
-(void)resolveIfNeeded;


@end


#endif