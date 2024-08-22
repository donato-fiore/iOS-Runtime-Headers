// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICMUTABLEPLAYACTIVITYEVENTCONTAINERIDS_H
#define ICMUTABLEPLAYACTIVITYEVENTCONTAINERIDS_H

@class NSString;


#import "ICPlayActivityEventContainerIDs.h"

@interface ICMutablePlayActivityEventContainerIDs : ICPlayActivityEventContainerIDs

@property (nonatomic) NSInteger adamID;
@property (copy, nonatomic) NSString *cloudAlbumID;
@property (nonatomic) NSUInteger cloudPlaylistID;
@property (copy, nonatomic) NSString *globalPlaylistID;
@property (copy, nonatomic) NSString *playlistVersionHash;
@property (copy, nonatomic) NSString *stationHash;
@property (nonatomic) NSInteger stationID;
@property (copy, nonatomic) NSString *stationStringID;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif