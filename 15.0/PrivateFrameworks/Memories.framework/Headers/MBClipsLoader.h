// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MBCLIPSLOADER_H
#define MBCLIPSLOADER_H

@class NSMutableArray, NSArray;

#import <Foundation/Foundation.h>


@interface MBClipsLoader : NSObject

@property (retain) NSMutableArray *clips; // ivar: _clips
@property (nonatomic, getter=isLoading) BOOL loading; // ivar: _loading
@property (retain) NSArray *previousClips; // ivar: _previousClips
@property (nonatomic) BOOL showOnlyFavorites; // ivar: _showOnlyFavorites


-(id)initWithShowOnlyFavorites:(BOOL)arg0 ;
-(void)load;
-(void)startLoading;
-(void)stopLoading;


@end


#endif