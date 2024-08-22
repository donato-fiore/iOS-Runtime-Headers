// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RWIPROTOCOLPAGEFRAMERESOURCETREE_H
#define RWIPROTOCOLPAGEFRAMERESOURCETREE_H

@class NSArray;


#import "RWIProtocolJSONObject.h"
#import "RWIProtocolPageFrame.h"

@interface RWIProtocolPageFrameResourceTree : RWIProtocolJSONObject

@property (copy, nonatomic) NSArray *childFrames;
@property (retain, nonatomic) RWIProtocolPageFrame *frame;
@property (copy, nonatomic) NSArray *resources;


-(id)initWithFrame:(id)arg0 resources:(id)arg1 ;


@end


#endif