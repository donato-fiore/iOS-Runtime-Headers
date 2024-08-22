// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFSETAIRDROPRECEIVINGACTION_H
#define WFSETAIRDROPRECEIVINGACTION_H

@class WFAction, NSString;



@interface WFSetAirDropReceivingAction : WFAction {
    ? discoveryController;
}


@property (nonatomic, readonly) NSString *descriptionSummary;


-(?)runWithInputcompletionHandler;
-(id)init;
-(id)initWithIdentifier:(id)arg0 definition:(id)arg1 serializedParameters:(id)arg2 ;


@end


#endif