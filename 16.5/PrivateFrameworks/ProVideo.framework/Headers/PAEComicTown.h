// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PAECOMICTOWN_H
#define PAECOMICTOWN_H



#import "PAEFilterDefaultBase.h"
#import "TDreamManager.h"

@interface PAEComicTown : PAEFilterDefaultBase {
    TDreamManager *_tdManager;
}




-(BOOL)addParameters;
-(BOOL)canThrowRenderOutput:(id)arg0 withInput:(id)arg1 withInfo:(struct ? )arg2 ;
-(BOOL)variesOverTime;
-(id)initWithAPIManager:(id)arg0 ;
-(id)properties;
-(void)dealloc;


@end


#endif