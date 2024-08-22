// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SHSHEETCONTENTDATASOURCEMANAGER_H
#define SHSHEETCONTENTDATASOURCEMANAGER_H

@class NSArray, NSMutableSet;
@protocol SHSheetContentDataSourceManagerDelegate;

#import <Foundation/Foundation.h>

#import "SHSheetContentDataSourceState.h"
#import "SHSheetContentDataSource.h"

@interface SHSheetContentDataSourceManager : NSObject

@property (readonly, copy, nonatomic) NSArray *applicationActivities; // ivar: _applicationActivities
@property (retain, nonatomic) SHSheetContentDataSourceState *currentState; // ivar: _currentState
@property (retain, nonatomic) SHSheetContentDataSource *dataSource; // ivar: _dataSource
@property (weak, nonatomic) NSObject<SHSheetContentDataSourceManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy, nonatomic) NSArray *heroActionActivityTypes; // ivar: _heroActionActivityTypes
@property (retain, nonatomic) NSMutableSet *suggestLessIdentifiers; // ivar: _suggestLessIdentifiers


-(id)_uniqueIdentifierForSectionIdentifier:(id)arg0 ;
-(id)_updateCurrentStateWithChangeRequest:(id)arg0 ;
-(id)initWithApplicationActivities:(id)arg0 heroActionActivityTypes:(id)arg1 ;
-(void)suggestLessPeopleProxyForIdentifier:(id)arg0 ;
-(void)updateWithChangeRequest:(id)arg0 ;


@end


#endif