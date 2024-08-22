// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIMEDIAINFOFETCHCONTROLLER_H
#define VUIMEDIAINFOFETCHCONTROLLER_H

@class NSMutableArray, NSOperationQueue, NSArray;

#import <Foundation/Foundation.h>


@interface VUIMediaInfoFetchController : NSObject

@property (retain, nonatomic) NSMutableArray *imageOperations; // ivar: _imageOperations
@property (retain, nonatomic) NSOperationQueue *imageQueue; // ivar: _imageQueue
@property (copy, nonatomic) NSArray *mediaInfos; // ivar: _mediaInfos
@property (retain, nonatomic) NSMutableArray *players; // ivar: _players


-(id)_createPlayerFromMediaInfo:(id)arg0 ;
-(id)init;
-(id)initWithMediaInfos:(id)arg0 ;
-(id)loadPlayerAtIndex:(NSUInteger)arg0 ;
-(void)_populateQueueWithMediaInfos:(id)arg0 ;
-(void)appendMediaInfos:(id)arg0 ;
-(void)dealloc;
-(void)loadImageAtIndex:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)removeMediaInfoAtIndex:(NSUInteger)arg0 ;
-(void)setMediaInfo:(id)arg0 atIndex:(NSUInteger)arg1 ;


@end


#endif