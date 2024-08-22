// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DDCREATEEVENTACTION_H
#define DDCREATEEVENTACTION_H

@class NSString;
@protocol EKEventEditViewDelegate;


#import "DDAddEventAction.h"

@interface DDCreateEventAction : DDAddEventAction <EKEventEditViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)localizedName;
-(void)eventEditViewController:(id)arg0 didCompleteWithAction:(NSInteger)arg1 ;
-(void)prepareViewControllerForActionController:(id)arg0 ;


@end


#endif