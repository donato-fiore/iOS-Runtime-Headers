// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTALLPROPERTYCHANGESQUERYOBSERVER_H
#define MTALLPROPERTYCHANGESQUERYOBSERVER_H

@class NSString;
@protocol NSFetchedResultsControllerDelegate;


#import "MTBaseQueryObserver.h"

@interface MTAllPropertyChangesQueryObserver : MTBaseQueryObserver <NSFetchedResultsControllerDelegate>

 {
    BOOL _inCallback;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)addResultsChangedHandler:(id)arg0 ;
-(void)controllerDidChangeContent:(id)arg0 ;
-(void)notifyObservers;
-(void)startObserving;


@end


#endif