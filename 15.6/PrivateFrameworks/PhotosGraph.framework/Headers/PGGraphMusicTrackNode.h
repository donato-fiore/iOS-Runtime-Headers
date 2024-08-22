// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGGRAPHMUSICTRACKNODE_H
#define PGGRAPHMUSICTRACKNODE_H

@class NSSet, NSString;


#import "PGGraphOptimizedNode.h"

@interface PGGraphMusicTrackNode : PGGraphOptimizedNode

@property (readonly, nonatomic) NSSet *albumNodes;
@property (readonly, nonatomic) NSSet *artistNodes;
@property (readonly) CGFloat durationInSeconds; // ivar: _durationInSeconds
@property (readonly, nonatomic) NSSet *genreNodes;
@property (readonly, nonatomic) NSString *title; // ivar: _title


+(id)musicTrackTitleSortDescriptors;
-(BOOL)hasProperties:(id)arg0 ;
-(id)description;
-(id)initWithLabel:(id)arg0 domain:(unsigned short)arg1 weight:(float)arg2 properties:(id)arg3 ;
-(id)initWithTitle:(id)arg0 durationInSeconds:(CGFloat)arg1 ;
-(id)label;
-(id)propertyDictionary;
-(unsigned short)domain;
-(void)enumerateAlbumNodesUsingBlock:(id)arg0 ;
-(void)enumerateArtistNodesUsingBlock:(id)arg0 ;
-(void)enumerateGenreNodesUsingBlock:(id)arg0 ;


@end


#endif