// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NURENDERPIPELINEFILTER_H
#define NURENDERPIPELINEFILTER_H


#import <Foundation/Foundation.h>

#import "NUScript.h"

@interface NURenderPipelineFilter : NSObject

@property (readonly, nonatomic) id *filterBlock; // ivar: _filterBlock
@property (readonly, nonatomic) NUScript *script; // ivar: _script


+(id)stopAtTagFilter:(id)arg0 ;
-(id)init;
-(id)initWithScript:(id)arg0 ;
-(id)initWithScript:(id)arg0 block:(id)arg1 ;


@end


#endif