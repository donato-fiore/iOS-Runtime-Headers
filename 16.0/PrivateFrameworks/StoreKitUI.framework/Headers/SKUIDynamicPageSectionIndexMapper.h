// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIDYNAMICPAGESECTIONINDEXMAPPER_H
#define SKUIDYNAMICPAGESECTIONINDEXMAPPER_H

@protocol SKUIEntityProviding;

#import <Foundation/Foundation.h>


@interface SKUIDynamicPageSectionIndexMapper : NSObject {
    *_NSRange _sectionIndexToEntityRange;
    NSInteger _numberOfSections;
    ? _entityProviderFlags;
}


@property (retain, nonatomic) NSObject<SKUIEntityProviding> *entityProvider; // ivar: _entityProvider
@property (readonly, nonatomic) NSInteger numberOfSections;
@property (readonly, nonatomic) NSInteger totalNumberOfEntities;


-(BOOL)getItem:(*NSUInteger)arg0 section:(*NSUInteger)arg1 forGlobalIndex:(NSInteger)arg2 ;
-(NSInteger)globalIndexForEntityIndexPath:(id)arg0 ;
-(id)entityIndexPathForGlobalIndex:(NSInteger)arg0 ;
-(struct _NSRange )rangeForSectionAtIndex:(NSInteger)arg0 ;
-(void)_loadDataIfNeeded;
-(void)dealloc;
-(void)reloadData;


@end


#endif