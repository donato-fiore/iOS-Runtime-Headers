// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXLIBRARYFILTERSTATE_H
#define PXLIBRARYFILTERSTATE_H

@class NSString;
@protocol PXPreferencesObserver, NSCopying, PXFilterState;


#import "PXObservable.h"

@interface PXLibraryFilterState : PXObservable <PXPreferencesObserver, NSCopying, PXFilterState>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isFiltering;
@property (readonly, nonatomic) NSString *localizedDescription;
@property (readonly, nonatomic) NSString *localizedFooterDescription;
@property (nonatomic, getter=isSharedLibraryBadgeEnabled) BOOL sharedLibraryBadgeEnabled; // ivar: _sharedLibraryBadgeEnabled
@property (readonly, nonatomic) unsigned short sharingFilter;
@property (readonly) Class superclass;
@property (nonatomic) NSInteger viewMode; // ivar: _viewMode


+(id)filterState;
+(id)sharedInstance;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isLibraryFilterActive:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)predicateForUseCase:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)preferencesDidChange;


@end


#endif