// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASTSIDEBYSIDEBUTTONSITEM_H
#define SASTSIDEBYSIDEBUTTONSITEM_H

@class NSString;
@protocol SASTTemplateItem, SASTTemplateAction;


#import "AceObject.h"
#import "SAUIColor.h"

@interface SASTSideBySideButtonsItem : AceObject <SASTTemplateItem>



@property (copy, nonatomic) NSString *buttonsViewStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<SASTTemplateAction> *primaryButtonAction;
@property (nonatomic) BOOL primaryButtonEnabled;
@property (copy, nonatomic) NSString *primaryButtonLabel;
@property (retain, nonatomic) SAUIColor *primaryButtonTextColor;
@property (retain, nonatomic) NSObject<SASTTemplateAction> *secondaryButtonAction;
@property (nonatomic) BOOL secondaryButtonEnabled;
@property (copy, nonatomic) NSString *secondaryButtonLabel;
@property (readonly) Class superclass;


+(id)sideBySideButtonsItem;
+(id)sideBySideButtonsItemWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif