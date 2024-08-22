// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TOGGLEREADERACTIVITY_H
#define TOGGLEREADERACTIVITY_H



#import "TabDocumentActivity.h"

@interface ToggleReaderActivity : TabDocumentActivity



-(BOOL)_isDisabled;
-(BOOL)_isEnabled;
-(NSInteger)actionType;
-(id)_systemImageName;
-(id)activityTitle;
-(id)activityType;
-(void)performActivityWithTabDocument:(id)arg0 ;


@end


#endif