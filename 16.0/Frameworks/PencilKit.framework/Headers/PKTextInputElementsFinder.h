// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKTEXTINPUTELEMENTSFINDER_H
#define PKTEXTINPUTELEMENTSFINDER_H

@class NSArray, NSMutableSet;

#import <Foundation/Foundation.h>


@interface PKTextInputElementsFinder : NSObject {
    BOOL _ignoreEditableElements;
    BOOL _supportNonEditableElements;
    BOOL __currentlyCollectingViews;
    NSArray *_windowsToSearch;
    NSInteger __finderState;
    NSMutableSet *__pendingElementContainerReplies;
    id *__finderCompletionHandler;
    NSArray *__reusableElements;
    NSMutableSet *__foundElements;
}






@end


#endif