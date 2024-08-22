// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DEGROUP_H
#define DEGROUP_H



#import "DENode.h"

@interface DEGroup : DENode

@property shared_ptr<siri::dialogengine::Group> This;


-(?)initWithSharedPtr;
-(id)getNodes;
-(id)init;
-(void)dealloc;


@end


#endif