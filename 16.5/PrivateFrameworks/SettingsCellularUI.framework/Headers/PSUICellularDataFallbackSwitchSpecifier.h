// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSUICELLULARDATAFALLBACKSWITCHSPECIFIER_H
#define PSUICELLULARDATAFALLBACKSWITCHSPECIFIER_H

@class PSSpecifier, PSListController;



@interface PSUICellularDataFallbackSwitchSpecifier : PSSpecifier

@property (weak, nonatomic) PSListController *hostController; // ivar: _hostController


-(id)initWithHostController:(id)arg0 ;
-(id)isFallbackEnabled:(id)arg0 ;
-(void)setFallbackEnabled:(id)arg0 specifier:(id)arg1 ;


@end


#endif