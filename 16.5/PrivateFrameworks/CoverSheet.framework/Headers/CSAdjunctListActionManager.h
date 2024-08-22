// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSADJUNCTLISTACTIONMANAGER_H
#define CSADJUNCTLISTACTIONMANAGER_H

@class NSString;
@protocol SBFActionHandling, CSItemDestination;

#import <Foundation/Foundation.h>


@interface CSAdjunctListActionManager : NSObject <SBFActionHandling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<CSItemDestination> *itemDestination; // ivar: _itemDestination
@property (readonly) Class superclass;


-(BOOL)_actionIsInRelevantSlot:(id)arg0 ;
-(BOOL)_handleLockScreenContentAction:(id)arg0 ;
-(BOOL)handleAction:(id)arg0 forProvider:(id)arg1 ;
-(BOOL)handlesActionWithClass:(Class)arg0 ;
-(id)initWithItemDestination:(id)arg0 ;


@end


#endif