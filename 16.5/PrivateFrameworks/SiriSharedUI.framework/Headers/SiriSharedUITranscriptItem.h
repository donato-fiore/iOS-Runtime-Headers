// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRISHAREDUITRANSCRIPTITEM_H
#define SIRISHAREDUITRANSCRIPTITEM_H

@class AceObject, NSUUID, UIViewController<SiriSharedUIViewControlling>;

#import <Foundation/Foundation.h>


@interface SiriSharedUITranscriptItem : NSObject

@property (retain, nonatomic) AceObject *aceObject; // ivar: _aceObject
@property (copy, nonatomic) NSUUID *itemIdentifier; // ivar: _itemIdentifier
@property (nonatomic) CGRect previousFrame; // ivar: _previousFrame
@property (nonatomic, getter=isRestored) BOOL restored; // ivar: _restored
@property (nonatomic) BOOL shouldBeExposed; // ivar: _shouldBeExposed
@property (nonatomic) BOOL snippetViewControllerHasBeenUnloaded; // ivar: _snippetViewControllerHasBeenUnloaded
@property (retain, nonatomic) UIViewController<SiriSharedUIViewControlling> *viewController; // ivar: _viewController


+(id)transcriptItemWithAceObject:(id)arg0 ;
-(BOOL)isConversationItem;
-(id)description;
-(id)initWithAceObject:(id)arg0 ;


@end


#endif