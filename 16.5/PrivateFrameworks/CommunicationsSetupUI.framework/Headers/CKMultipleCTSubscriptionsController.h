// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKMULTIPLECTSUBSCRIPTIONSCONTROLLER_H
#define CKMULTIPLECTSUBSCRIPTIONSCONTROLLER_H

@class PSListController, NSString, NSArray;



@interface CKMultipleCTSubscriptionsController : PSListController

@property (copy, nonatomic) NSString *controllerTitle; // ivar: _controllerTitle
@property (retain, nonatomic) NSArray *ctSubscriptions; // ivar: _ctSubscriptions
@property (copy, nonatomic) NSString *defaultsKey; // ivar: _defaultsKey
@property (copy, nonatomic) NSString *headerKey; // ivar: _headerKey


-(id)isEnabledForSubscription:(id)arg0 ;
-(id)specifiers;
-(void)setEnabledForSubscription:(id)arg0 specifier:(id)arg1 ;
-(void)systemApplicationWillEnterForeground;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif