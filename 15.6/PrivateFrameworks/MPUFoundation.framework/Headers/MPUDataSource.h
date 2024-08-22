// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPUDATASOURCE_H
#define MPUDATASOURCE_H

@class NSString, NSArray;
@protocol NSCoding;

#import <Foundation/Foundation.h>


@interface MPUDataSource : NSObject <NSCoding>

 {
    NSInteger _invalidationIgnoreCount;
    NSInteger _numberOfIgnoredInvalidations;
}


@property (readonly, nonatomic) NSUInteger count;
@property (readonly, nonatomic) NSString *entityCountFormat;
@property (readonly, nonatomic) NSInteger entityType; // ivar: _entityType
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) NSArray *localizedSectionIndexTitles;
@property (readonly, nonatomic) NSUInteger numberOfSections;
@property (readonly, nonatomic) BOOL showsEntityCountFooter;
@property (readonly, nonatomic) BOOL showsIndexBar;
@property (readonly, nonatomic) BOOL usesSections;


+(Class)invalidationContextClass;
-(BOOL)canEditEntityAtIndex:(NSUInteger)arg0 ;
-(BOOL)canEditEntityAtIndexPath:(id)arg0 ;
-(BOOL)canSelectEntityAtIndex:(NSUInteger)arg0 ;
-(BOOL)entityIsNowPlayingAtIndex:(NSUInteger)arg0 ;
-(BOOL)isIgnoringInvalidation;
-(NSInteger)editingTypeForEntityAtIndex:(NSUInteger)arg0 ;
-(NSInteger)editingTypeForEntityAtIndexPath:(id)arg0 ;
-(NSUInteger)_globalIndexForIndexPath:(id)arg0 ;
-(NSUInteger)indexOfEntity:(id)arg0 ;
-(NSUInteger)indexOfSectionEntity:(id)arg0 ;
-(NSUInteger)indexOfSectionForSectionTitleAtIndex:(NSUInteger)arg0 ;
-(id)_indexPathForGlobalIndex:(NSUInteger)arg0 ;
-(id)anyEntity;
-(id)entities;
-(id)entityAtIndex:(NSUInteger)arg0 ;
-(id)entityAtIndexPath:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEntityType:(NSInteger)arg0 ;
-(id)localizedSectionTitleAtIndex:(NSUInteger)arg0 ;
-(id)playbackContextForIndex:(NSUInteger)arg0 ;
-(id)sectionEntities;
-(id)sectionEntityAtIndex:(NSUInteger)arg0 ;
-(struct _NSRange )rangeOfSectionAtIndex:(NSUInteger)arg0 ;
-(void)_didInvalidateWithContext:(id)arg0 ;
-(void)_invalidateCalculatedEntities;
-(void)_willInvalidateWithContext:(id)arg0 ;
-(void)beginIgnoringInvalidation;
-(void)deleteEntityAtIndex:(NSUInteger)arg0 ;
-(void)deleteEntityAtIndexPath:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)endIgnoringInvalidation;
-(void)invalidate;
-(void)invalidateWithContext:(id)arg0 ;
-(void)preloadEntities;
-(void)preloadSectionEntities;


@end


#endif