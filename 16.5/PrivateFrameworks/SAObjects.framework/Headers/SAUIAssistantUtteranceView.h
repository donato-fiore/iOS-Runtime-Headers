// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAUIASSISTANTUTTERANCEVIEW_H
#define SAUIASSISTANTUTTERANCEVIEW_H

@class NSString, NSNumber;


#import "SAAceView.h"

@interface SAUIAssistantUtteranceView : SAAceView

@property (copy, nonatomic) NSString *dialogIdentifier;
@property (copy, nonatomic) NSNumber *postDialogDelayInMilliseconds;
@property (copy, nonatomic) NSString *text;


+(id)assistantUtteranceView;
+(id)assistantUtteranceViewWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif