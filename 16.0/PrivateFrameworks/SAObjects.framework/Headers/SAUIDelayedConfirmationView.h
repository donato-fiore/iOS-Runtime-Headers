// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAUIDELAYEDCONFIRMATIONVIEW_H
#define SAUIDELAYEDCONFIRMATIONVIEW_H



#import "SAUIConfirmationView.h"

@interface SAUIDelayedConfirmationView : SAUIConfirmationView

@property (nonatomic) NSInteger autoConfirmDelay;


+(id)delayedConfirmationView;
+(id)delayedConfirmationViewWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif