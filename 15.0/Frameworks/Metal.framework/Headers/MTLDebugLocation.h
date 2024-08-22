// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLDEBUGLOCATION_H
#define MTLDEBUGLOCATION_H


#import <Foundation/Foundation.h>

#import "MTLDebugInstrumentationData.h"
#import "MTLDebugLocation.h"
#import "MTLDebugSubProgram.h"

@interface MTLDebugLocation : NSObject {
    MTLDebugInstrumentationData *_data;
    *DebugLocation _debugLoc;
}


@property (readonly, nonatomic) unsigned int column;
@property (readonly, nonatomic) MTLDebugLocation *inlinedAt;
@property (readonly, nonatomic) unsigned int line;
@property (readonly, nonatomic) MTLDebugSubProgram *scope;


-(id)description;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)retain;
-(void)dealloc;
-(void)release;
-(void)releaseInternal;


@end


#endif