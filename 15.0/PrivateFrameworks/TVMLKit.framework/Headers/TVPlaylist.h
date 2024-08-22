// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TVPLAYLIST_H
#define TVPLAYLIST_H

@class NSArray, NSDictionary;

#import <Foundation/Foundation.h>


@interface TVPlaylist : NSObject

@property (nonatomic) NSInteger endAction; // ivar: _endAction
@property (readonly, copy, nonatomic) NSArray *mediaItems; // ivar: _mediaItems
@property (nonatomic) NSInteger repeatMode; // ivar: _repeatMode
@property (copy, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


-(void)addObject:(id)arg0 ;
-(void)insertObjects:(id)arg0 atIndexes:(id)arg1 ;
-(void)removeObjectsAtIndexes:(id)arg0 ;


@end


#endif