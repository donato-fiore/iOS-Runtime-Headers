// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PREDITINGDIDDISMISSACTION_H
#define PREDITINGDIDDISMISSACTION_H

@class BSAction, NSArray, PRSWidget;



@interface PREditingDidDismissAction : BSAction

@property (readonly, nonatomic) NSArray *graphicComplications; // ivar: _graphicComplications
@property (readonly, nonatomic) PRSWidget *inlineComplication; // ivar: _inlineComplication
@property (readonly, nonatomic) BOOL userAcceptedChanges;


+(id)acceptChangesWithCompletion:(id)arg0 ;
+(id)cancelAction;
-(id)_initWithCompletion:(id)arg0 ;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;
-(id)valueDescriptionForFlag:(NSInteger)arg0 object:(id)arg1 ofSetting:(NSUInteger)arg2 ;
-(void)sendResponseWithUpdatedConfiguration:(id)arg0 updatedProperties:(id)arg1 ;


@end


#endif