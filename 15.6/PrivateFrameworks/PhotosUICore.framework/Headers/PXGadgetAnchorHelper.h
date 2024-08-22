// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXGADGETANCHORHELPER_H
#define PXGADGETANCHORHELPER_H

@protocol PXGadget, PXGadgetAnchorHelperDelegate;

#import <Foundation/Foundation.h>

#import "PXGadgetDataSourceManager.h"
#import "PXGadgetNavigationHelper.h"

@interface PXGadgetAnchorHelper : NSObject

@property (nonatomic) NSInteger anchorPosition; // ivar: _anchorPosition
@property (retain, nonatomic) NSObject<PXGadget> *currentAnchor; // ivar: _currentAnchor
@property (retain, nonatomic) PXGadgetDataSourceManager *dataSourceManager; // ivar: _dataSourceManager
@property (weak, nonatomic) NSObject<PXGadgetAnchorHelperDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) BOOL hasAnchor;
@property (retain, nonatomic) PXGadgetNavigationHelper *navigationHelper; // ivar: _navigationHelper


-(id)_convertIndexPathToGadget:(id)arg0 ;
-(id)_generateAnchor;
-(id)initWithNavigationHelper:(id)arg0 dataSourceManager:(id)arg1 ;
-(void)clearAnchor;
-(void)navigateToAnchorIfNeeded;
-(void)saveAnchor;
-(void)saveGadgetAsAnchor:(id)arg0 ;


@end


#endif