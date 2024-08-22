// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXLAYOUTTASK_H
#define SXLAYOUTTASK_H

@class NSString;

#import <Foundation/Foundation.h>

#import "SXDOM.h"
#import "SXLayoutBlueprint.h"
#import "SXLayoutInstructions.h"
#import "SXLayoutOptions.h"

@interface SXLayoutTask : NSObject

@property (readonly, nonatomic) SXDOM *DOM; // ivar: _DOM
@property (readonly, copy, nonatomic) SXLayoutBlueprint *blueprint; // ivar: _blueprint
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) SXLayoutInstructions *instructions; // ivar: _instructions
@property (readonly, nonatomic) SXLayoutOptions *options; // ivar: _options
@property (readonly, nonatomic) CGFloat startTime; // ivar: _startTime
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


-(id)description;
-(id)initWithOptions:(id)arg0 instructions:(id)arg1 ;
-(id)initWithOptions:(id)arg0 instructions:(id)arg1 blueprint:(id)arg2 DOM:(id)arg3 ;


@end


#endif