// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INGETONSCREENCONTENTFORWARDINGACTIONRESPONSE_H
#define INGETONSCREENCONTENTFORWARDINGACTIONRESPONSE_H

@class WFOnScreenContentNode;


#import "INIntentForwardingActionResponse.h"

@interface INGetOnScreenContentForwardingActionResponse : INIntentForwardingActionResponse

@property (readonly, nonatomic) WFOnScreenContentNode *node; // ivar: _node


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNode:(id)arg0 error:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif