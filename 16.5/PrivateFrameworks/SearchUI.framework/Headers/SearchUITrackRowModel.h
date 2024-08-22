// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEARCHUITRACKROWMODEL_H
#define SEARCHUITRACKROWMODEL_H

@class SFTrack;


#import "SearchUICardSectionRowModel.h"
#import "SearchUITrackLayoutManager.h"

@interface SearchUITrackRowModel : SearchUICardSectionRowModel

@property (retain, nonatomic) SFTrack *track; // ivar: _track
@property (retain, nonatomic) SearchUITrackLayoutManager *trackLayoutManager; // ivar: _trackLayoutManager


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithResult:(id)arg0 trackManager:(id)arg1 cardSection:(id)arg2 track:(id)arg3 queryId:(NSUInteger)arg4 ;


@end


#endif