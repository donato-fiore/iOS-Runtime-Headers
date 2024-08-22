// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICSYSTEMPAPERDISMISSACTION_H
#define ICSYSTEMPAPERDISMISSACTION_H

@class BSAction, NSString;



@interface ICSystemPaperDismissAction : BSAction

@property (readonly, copy, nonatomic) NSString *dismissalReason;


-(BOOL)_expectsResponse;
-(id)initWithReason:(id)arg0 ;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;


@end


#endif