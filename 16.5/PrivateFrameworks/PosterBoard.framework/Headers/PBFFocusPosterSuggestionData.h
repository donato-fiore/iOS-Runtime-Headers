// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBFFOCUSPOSTERSUGGESTIONDATA_H
#define PBFFOCUSPOSTERSUGGESTIONDATA_H

@class NSArray, NSMapTable;

#import <Foundation/Foundation.h>


@interface PBFFocusPosterSuggestionData : NSObject

@property (readonly, nonatomic) NSUInteger count;
@property (readonly, nonatomic) NSArray *previews; // ivar: _previews
@property (readonly, nonatomic) NSMapTable *previewsToSnapshotsMapTable; // ivar: _previewsToSnapshotsMapTable


-(id)initWithPreviews:(id)arg0 previewsToSnapshotsMapTable:(id)arg1 ;
-(id)objectAtIndexedSubscript:(NSUInteger)arg0 ;
-(id)previewForUniqueIdentifier:(id)arg0 ;
-(id)snapshotForPoster:(id)arg0 ;


@end


#endif