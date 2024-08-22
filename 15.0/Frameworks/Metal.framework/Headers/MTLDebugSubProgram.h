// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLDEBUGSUBPROGRAM_H
#define MTLDEBUGSUBPROGRAM_H

@class NSString;

#import <Foundation/Foundation.h>

#import "MTLDebugInstrumentationData.h"

@interface MTLDebugSubProgram : NSObject {
    MTLDebugInstrumentationData *_data;
    *DebugSubProgram _debugSubProgram;
}


@property (readonly, nonatomic) NSString *filename;
@property (readonly, nonatomic) unsigned int line;
@property (readonly, nonatomic) NSString *name;


-(id)retain;
-(void)release;
-(void)releaseInternal;


@end


#endif