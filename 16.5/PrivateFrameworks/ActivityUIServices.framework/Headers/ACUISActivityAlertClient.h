// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACUISACTIVITYALERTCLIENT_H
#define ACUISACTIVITYALERTCLIENT_H

@class NSString;
@protocol _TtP18ActivityUIServices27ActivityAlertClientDelegate_, ACUISActivityAlertClientDelegate;

#import <Foundation/Foundation.h>

#import "_TtC18ActivityUIServices19ActivityAlertClient.h"

@interface ACUISActivityAlertClient : NSObject <_TtP18ActivityUIServices27ActivityAlertClientDelegate_>



@property (retain, nonatomic) _TtC18ActivityUIServices19ActivityAlertClient *alertClient; // ivar: _alertClient
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ACUISActivityAlertClientDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)activityWithAlertClient:(id)arg0 dismissAlertProvider:(id)arg1 ;
-(void)activityWithAlertClient:(id)arg0 presentAlertProvider:(id)arg1 completion:(id)arg2 ;


@end


#endif