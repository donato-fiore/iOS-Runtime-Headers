// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC9SNIPPETUI7CONTEXT_H
#define _TTC9SNIPPETUI7CONTEXT_H

@protocol VRXInteractionDelegate;

#import <Foundation/Foundation.h>


@interface _TtC9SnippetUI7Context : NSObject {
    ? _asrText;
    ? _sharedState;
    ? viewId;
    ? $__lazy_storage_$_siriEventUpdatePublisher;
    ? siriEventUpdateSubject;
    ? _snippetWidth;
    ? _backgroundMaterial;
    ? _backgroundElements;
    ? cancellables;
}


@property (nonatomic) NSInteger backgroundMaterial;
@property (nonatomic) NSInteger currentIdiom; // ivar: currentIdiom
@property (nonatomic, weak) NSObject<VRXInteractionDelegate> *interactionDelegate; // ivar: interactionDelegate
@property (nonatomic) CGFloat snippetWidth;


-(id)init;


@end


#endif