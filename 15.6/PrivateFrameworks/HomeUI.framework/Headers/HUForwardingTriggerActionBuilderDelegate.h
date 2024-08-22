// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUFORWARDINGTRIGGERACTIONBUILDERDELEGATE_H
#define HUFORWARDINGTRIGGERACTIONBUILDERDELEGATE_H

@class NSString;
@protocol HUTriggerEditorDelegate, HUTriggerActionBuilderEditorDelegate;

#import <Foundation/Foundation.h>


@interface HUForwardingTriggerActionBuilderDelegate : NSObject <HUTriggerEditorDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<HUTriggerActionBuilderEditorDelegate> *triggerActionBuilderEditorDelegate; // ivar: _triggerActionBuilderEditorDelegate


-(BOOL)triggerEditor:(id)arg0 shouldCommitTriggerBuilder:(id)arg1 ;
-(id)initWithTriggerActionBuilderEditorDelegate:(id)arg0 ;
-(void)triggerEditor:(id)arg0 didFinishWithTriggerBuilder:(id)arg1 ;


@end


#endif