// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMCPARTITION_H
#define HMCPARTITION_H

@class HMFObject;


#import "HMCRedirector.h"

@interface HMCPartition : HMFObject

@property (readonly) HMCRedirector *redirections; // ivar: _redirections


-(BOOL)modelBelongsToThisPartition:(id)arg0 ;
-(id)init;


@end


#endif