// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NCUSERALERTACTIONRUNNER_H
#define NCUSERALERTACTIONRUNNER_H

@class SBAlertItem, NSString;
@protocol NCNotificationActionRunner;

#import <Foundation/Foundation.h>


@interface NCUserAlertActionRunner : NSObject <NCNotificationActionRunner>



@property (readonly, weak, nonatomic) SBAlertItem *alertItem; // ivar: _alertItem
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL shouldForwardAction; // ivar: _shouldForwardAction
@property (readonly) Class superclass;


-(id)initWithSBAlertItem:(id)arg0 ;
-(void)executeAction:(id)arg0 fromOrigin:(id)arg1 endpoint:(id)arg2 withParameters:(id)arg3 completion:(id)arg4 ;


@end


#endif