// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAUIUSERUTTERANCEVIEW_H
#define SAUIUSERUTTERANCEVIEW_H

@class NSString;


#import "SAAceView.h"

@interface SAUIUserUtteranceView : SAAceView

@property (copy, nonatomic) NSString *text;


+(id)userUtteranceView;
+(id)userUtteranceViewWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif