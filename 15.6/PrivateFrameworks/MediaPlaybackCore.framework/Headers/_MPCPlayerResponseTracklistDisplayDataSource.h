// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MPCPLAYERRESPONSETRACKLISTDISPLAYDATASOURCE_H
#define _MPCPLAYERRESPONSETRACKLISTDISPLAYDATASOURCE_H

@class NSString, MPSectionedCollection, NSIndexPath, NSDictionary, NSArray;
@protocol MPLazySectionedCollectionDataSource;

#import <Foundation/Foundation.h>


@interface _MPCPlayerResponseTracklistDisplayDataSource : NSObject <MPLazySectionedCollectionDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) MPSectionedCollection *items; // ivar: _items
@property (readonly, copy, nonatomic) NSIndexPath *playingItemIndexPath; // ivar: _playingItemIndexPath
@property (readonly, nonatomic) NSDictionary *sectionRanges; // ivar: _sectionRanges
@property (readonly, nonatomic) NSArray *sections; // ivar: _sections
@property (readonly) Class superclass;


-(NSUInteger)numberOfItemsInSection:(NSUInteger)arg0 ;
-(NSUInteger)numberOfSections;
-(id)displayIndexPathForStructuredIndexPath:(id)arg0 ;
-(id)initWithTracklistItems:(id)arg0 playingItemIndexPath:(id)arg1 ;
-(id)itemAtIndexPath:(id)arg0 ;
-(id)sectionAtIndex:(NSUInteger)arg0 ;
-(id)structuredIndexPathForDisplayIndexPath:(id)arg0 ;


@end


#endif