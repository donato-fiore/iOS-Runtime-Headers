// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSHAREDLIBRARYRULEPEOPLEDATAMANAGER_H
#define PXSHAREDLIBRARYRULEPEOPLEDATAMANAGER_H

@class NSDiffableDataSourceSnapshot, NSArray, NSString;
@protocol PXChangeObserver, PXSharedLibraryRulePeopleDataManagerDelegate;

#import <Foundation/Foundation.h>

#import "PXSharedLibraryRule.h"

@interface PXSharedLibraryRulePeopleDataManager : NSObject <PXChangeObserver>

 {
    PXSharedLibraryRule *_currentSharedLibraryRule;
    NSDiffableDataSourceSnapshot *_currentSnapshot;
}


@property (readonly, nonatomic) NSArray *currentPersonIdentifiers; // ivar: _currentPersonIdentifiers
@property (readonly, nonatomic) NSDiffableDataSourceSnapshot *currentSnapshot;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXSharedLibraryRulePeopleDataManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *statusMessage; // ivar: _statusMessage
@property (readonly) Class superclass;


-(id)init;
-(void)_updateCurrentSnapshot;
-(void)_updateIfNeeded;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif