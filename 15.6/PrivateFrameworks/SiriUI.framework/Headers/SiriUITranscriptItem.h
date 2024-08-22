// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRIUITRANSCRIPTITEM_H
#define SIRIUITRANSCRIPTITEM_H

@class AceObject, NSUUID, UIViewController<SiriUIViewController>;

#import <Foundation/Foundation.h>


@interface SiriUITranscriptItem : NSObject

@property (retain, nonatomic) AceObject *aceObject; // ivar: _aceObject
@property (copy, nonatomic) NSUUID *itemIdentifier; // ivar: _itemIdentifier
@property (nonatomic) CGRect previousFrame; // ivar: _previousFrame
@property (nonatomic, getter=isRestored) BOOL restored; // ivar: _restored
@property (nonatomic) BOOL shouldBeExposed; // ivar: _shouldBeExposed
@property (nonatomic) BOOL snippetViewControllerHasBeenUnloaded; // ivar: _snippetViewControllerHasBeenUnloaded
@property (retain, nonatomic) UIViewController<SiriUIViewController> *viewController; // ivar: _viewController


+(id)transcriptItemWithAceObject:(id)arg0 ;
-(id)description;
-(id)initWithAceObject:(id)arg0 ;


@end


#endif