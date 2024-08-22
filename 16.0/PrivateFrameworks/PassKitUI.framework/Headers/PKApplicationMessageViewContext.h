// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKAPPLICATIONMESSAGEVIEWCONTEXT_H
#define PKAPPLICATIONMESSAGEVIEWCONTEXT_H

@class PKApplicationMessageNode;

#import <Foundation/Foundation.h>

#import "PKApplicationMessageView.h"

@interface PKApplicationMessageViewContext : NSObject {
    BOOL _userExpanded;
    PKApplicationMessageNode *_node;
    PKApplicationMessageView *_view;
    NSUInteger _numberOfAdditionalSubviews;
}




-(id)init;


@end


#endif