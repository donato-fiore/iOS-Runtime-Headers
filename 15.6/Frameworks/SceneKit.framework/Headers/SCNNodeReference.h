// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCNNODEREFERENCE_H
#define SCNNODEREFERENCE_H

@class NSString;


#import "SCNReferenceNode.h"

@interface SCNNodeReference : SCNReferenceNode

@property (copy, nonatomic) NSString *referenceNodeName; // ivar: referenceNodeName
@property (copy, nonatomic) NSString *referenceSceneName; // ivar: referenceSceneName


-(void)_reloadWithScene:(id)arg0 ;
-(void)dealloc;


@end


#endif