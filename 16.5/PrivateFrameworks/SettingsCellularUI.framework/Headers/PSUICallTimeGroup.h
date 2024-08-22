// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSUICALLTIMEGROUP_H
#define PSUICALLTIMEGROUP_H

@class CHManager, PSSpecifier, NSString, PSListController;
@protocol Loggable;

#import <Foundation/Foundation.h>


@interface PSUICallTimeGroup : NSObject <Loggable>



@property (retain, nonatomic) CHManager *callHistoryManager; // ivar: _callHistoryManager
@property (retain, nonatomic) PSSpecifier *currentCallTimeSpecifier; // ivar: _currentCallTimeSpecifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PSSpecifier *groupSpecifier; // ivar: _groupSpecifier
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) PSListController *hostController; // ivar: _hostController
@property (retain, nonatomic) PSSpecifier *lifetimeCallTimeSpecifier; // ivar: _lifetimeCallTimeSpecifier
@property (readonly) Class superclass;


-(id)callTime:(id)arg0 ;
-(id)callTimeDurationRestrictedToCurrentPeriod:(BOOL)arg0 ;
-(id)getLogger;
-(id)initWithListController:(id)arg0 ;
-(id)lifetimeCallTime:(id)arg0 ;
-(id)specifiers;
-(void)handleCallTimersChanged;


@end


#endif