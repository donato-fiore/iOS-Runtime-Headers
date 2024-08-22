// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKAPPLICATIONMESSAGEVIEW_REMOVEDSUBVIEWCONTAINER_H
#define PKAPPLICATIONMESSAGEVIEW_REMOVEDSUBVIEWCONTAINER_H

@class UIView;

#import <Foundation/Foundation.h>


@interface PKApplicationMessageView_RemovedSubviewContainer : NSObject {
    id *_commitAnimation;
    id *_commitCompletion;
    unsigned char _commitFlag;
    int _layoutMode;
    UIView *_view;
    NSUInteger _index;
    NSUInteger _visualIndex;
}




-(id)init;
-(void)dealloc;


@end


#endif