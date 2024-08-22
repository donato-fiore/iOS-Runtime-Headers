// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FPDPRESENTERMANAGER_H
#define FPDPRESENTERMANAGER_H

@class NSMutableDictionary, NSDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "FPDExtensionManager.h"
#import "FPDFilePresenter.h"

@interface FPDPresenterManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_promisedPresenters;
    NSUInteger nextPromiseID;
    FPDExtensionManager *_extensionManager;
    FPDFilePresenter *_frontmostPresenter;
}


@property (readonly, nonatomic) NSDictionary *presenters; // ivar: _presenters


-(NSUInteger)promisePresenterWithID:(id)arg0 ;
-(id)initWithExtensionManager:(id)arg0 ;
-(id)presentersForDomain:(id)arg0 ;
-(void)addPresenter:(id)arg0 itemID:(id)arg1 urlHint:(id)arg2 pid:(int)arg3 promiseID:(NSUInteger)arg4 ;
-(void)forgetPromiseForPresenterWithID:(id)arg0 promiseID:(NSUInteger)arg1 ;
-(void)noteItemBecameFrontmost:(id)arg0 inWindow:(id)arg1 completionHandler:(id)arg2 ;
-(void)removePresenter:(id)arg0 ;
-(void)signalPresentersForItemID:(id)arg0 ;


@end


#endif