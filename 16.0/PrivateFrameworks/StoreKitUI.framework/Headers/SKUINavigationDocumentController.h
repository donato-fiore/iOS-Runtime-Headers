// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUINAVIGATIONDOCUMENTCONTROLLER_H
#define SKUINAVIGATIONDOCUMENTCONTROLLER_H

@class NSMutableArray, NSString, NSArray, UINavigationController;
@protocol IKAppNavigationController, SKUINavigationDocumentDelegate;

#import <Foundation/Foundation.h>

#import "SKUIClientContext.h"

@interface SKUINavigationDocumentController : NSObject <IKAppNavigationController>

 {
    NSMutableArray *_pendingNavigationStackEnsureConsistencyRequests;
}


@property (retain, nonatomic) SKUIClientContext *clientContext; // ivar: _clientContext
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKUINavigationDocumentDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSArray *documentStackItems; // ivar: _stackItems
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UINavigationController *moreNavigationController; // ivar: _moreNavigationController
@property (readonly, nonatomic) UINavigationController *navigationController; // ivar: _navigationController
@property (retain, nonatomic) UINavigationController *overrideNavigationController; // ivar: _overrideNavigationController
@property (readonly) Class superclass;


-(id)_activeNavigationController;
-(id)documents;
-(id)initWithNavigationController:(id)arg0 ;
-(void)_applyDocumentReplacementForOldStackItem:(id)arg0 atOldIndex:(NSInteger)arg1 withStackItem:(id)arg2 ;
-(void)_ensureStackConsistencyForNavigationControllerOperation:(NSInteger)arg0 operationDidComplete:(BOOL)arg1 ;
-(void)_handleStackDidChange;
-(void)_scheduleFlushingPendingNavigationStackEnsureConsistencyRequestsWithTransitionCoordinator:(id)arg0 ;
-(void)_unloadAllStackItems;
-(void)clear;
-(void)ensureStackConsistencyForNavigationControllerOperation:(NSInteger)arg0 operationDidComplete:(BOOL)arg1 ;
-(void)insertDocument:(id)arg0 beforeDocument:(id)arg1 options:(id)arg2 ;
-(void)popAllDocuments;
-(void)popDocument;
-(void)popToDocument:(id)arg0 ;
-(void)popToRootDocument;
-(void)pushDocument:(id)arg0 options:(id)arg1 ;
-(void)removeDocument:(id)arg0 ;
-(void)replaceDocument:(id)arg0 withDocument:(id)arg1 options:(id)arg2 ;
-(void)setStackItems:(id)arg0 animated:(BOOL)arg1 ;


@end


#endif