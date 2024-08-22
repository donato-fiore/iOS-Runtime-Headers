// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TRIGGEREDITORDELEGATEWRAPPER_H
#define _TRIGGEREDITORDELEGATEWRAPPER_H

@class NSString;
@protocol HUTriggerEditorDelegate;

#import <Foundation/Foundation.h>


@interface _TriggerEditorDelegateWrapper : NSObject <HUTriggerEditorDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUTriggerEditorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)respondsToSelector:(SEL)arg0 ;
-(BOOL)triggerEditor:(id)arg0 shouldCommitTriggerBuilder:(id)arg1 ;
-(void)triggerEditor:(id)arg0 didCommitTriggerBuilder:(id)arg1 withError:(id)arg2 ;
-(void)triggerEditor:(id)arg0 didFinishWithTriggerBuilder:(id)arg1 ;


@end


#endif