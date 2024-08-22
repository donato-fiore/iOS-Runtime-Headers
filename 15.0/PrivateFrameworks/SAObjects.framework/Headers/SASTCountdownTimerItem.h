// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SASTCOUNTDOWNTIMERITEM_H
#define SASTCOUNTDOWNTIMERITEM_H

@class NSString;
@protocol SASTActionableTemplateItem, SASTTemplateAction;


#import "AceObject.h"
#import "SAUIColor.h"

@interface SASTCountdownTimerItem : AceObject <SASTActionableTemplateItem>



@property (retain, nonatomic) NSObject<SASTTemplateAction> *action;
@property (nonatomic) NSInteger actionDelayInSeconds;
@property (retain, nonatomic) SAUIColor *bodyBackgroundColor;
@property (retain, nonatomic) SAUIColor *countdownTextColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SAUIColor *headerBackgroundColor;
@property (copy, nonatomic) NSString *headerText;
@property (retain, nonatomic) SAUIColor *headerTextColor;
@property (readonly) Class superclass;


+(id)countdownTimerItem;
+(id)countdownTimerItemWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif