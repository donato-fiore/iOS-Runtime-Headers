// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ESPRESSOMODEL_H
#define ESPRESSOMODEL_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface EspressoModel : NSObject {
    *void _context;
    *void _plan;
    ? _net;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    int _engine;
}


@property (nonatomic) NSInteger usage; // ivar: _usage


-(BOOL)buildModelWithConfiguration:(char *)arg0 ;
-(BOOL)initContextWithFile:(id)arg0 engine:(int)arg1 configuration:(char *)arg2 usePreCompiled:(BOOL)arg3 ;
-(BOOL)switchUsage:(NSInteger)arg0 ;
-(id)initMPSWithModelName:(id)arg0 usage:(NSInteger)arg1 ;
-(id)initWithModelName:(id)arg0 configuration:(char *)arg1 ;
-(id)initWithModelName:(id)arg0 usage:(NSInteger)arg1 ;
-(int)loadModel:(id)arg0 from:(id)arg1 ;
-(void)dealloc;
-(void)freeContext;


@end


#endif