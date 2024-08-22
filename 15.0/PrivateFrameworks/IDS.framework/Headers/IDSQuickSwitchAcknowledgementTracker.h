// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSQUICKSWITCHACKNOWLEDGEMENTTRACKER_H
#define IDSQUICKSWITCHACKNOWLEDGEMENTTRACKER_H

@class NSMutableSet;

#import <Foundation/Foundation.h>


@interface IDSQuickSwitchAcknowledgementTracker : NSObject {
    NSMutableSet *_delegateIdentifiers;
    _opaque_pthread_mutex_t _delegateIdentifiersMutex;
}


@property (readonly, nonatomic) BOOL isAwaitingAcknowledgement;


-(id)awaitAcknowledgementFromServiceDelegate:(id)arg0 ;
-(id)identifierForServiceDelegate:(id)arg0 ;
-(id)init;
-(void)_accessDelegateIdentifiersInCriticalSectionWithBlock:(id)arg0 ;
-(void)dealloc;
-(void)stopAwaitingAcknowledgementFromAllServiceDelegates;
-(void)stopAwaitingAcknowledgementFromServiceDelegateWithIdentifier:(id)arg0 ;


@end


#endif