// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPESPRESSOMODEL_H
#define VCPESPRESSOMODEL_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface VCPEspressoModel : NSObject {
    *void _context;
    *void _plan;
    ? _net;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}




-(BOOL)buildModelWithConfig:(id)arg0 error:(*id)arg1 ;
-(BOOL)prepareModelWithFile:(id)arg0 engine:(int)arg1 config:(id)arg2 error:(*id)arg3 ;
-(BOOL)updateModelWithConfig:(id)arg0 error:(*id)arg1 ;
-(id)initModelWithName:(id)arg0 andConfig:(id)arg1 ;
-(int)loadModel:(id)arg0 ;
-(void)dealloc;
-(void)freeModel;


@end


#endif