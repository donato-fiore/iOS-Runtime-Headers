// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MPCPLAYERRESPONSETRACKLISTDATASOURCE_H
#define _MPCPLAYERRESPONSETRACKLISTDATASOURCE_H

@class NSString, NSIndexPath;
@protocol MPLazySectionedCollectionDataSource;

#import <Foundation/Foundation.h>

#import "MPCPlayerResponse.h"

@interface _MPCPlayerResponseTracklistDataSource : NSObject <MPLazySectionedCollectionDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSIndexPath *playingItemIndexPath; // ivar: _playingItemIndexPath
@property (readonly, weak, nonatomic) MPCPlayerResponse *response; // ivar: _response
@property (readonly) Class superclass;


-(NSUInteger)numberOfItemsInSection:(NSUInteger)arg0 ;
-(NSUInteger)numberOfSections;
-(id)initWithResponse:(id)arg0 playingItemIndexPath:(id)arg1 ;
-(id)itemAtIndexPath:(id)arg0 ;
-(id)sectionAtIndex:(NSUInteger)arg0 ;


@end


#endif