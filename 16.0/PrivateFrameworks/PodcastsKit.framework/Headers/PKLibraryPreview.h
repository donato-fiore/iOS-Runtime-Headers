// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKLIBRARYPREVIEW_H
#define PKLIBRARYPREVIEW_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface PKLibraryPreview : NSObject

@property (copy, nonatomic) NSArray *shows; // ivar: _shows
@property (copy, nonatomic) NSArray *stations; // ivar: _stations


+(id)_readFromPodcastsContainerWithDataSource:(id)arg0 ;
+(id)readFromPodcastsContainer;
+(id)readPlistWithPath:(id)arg0 ;
-(id)initWithShows:(id)arg0 stations:(id)arg1 ;


@end


#endif