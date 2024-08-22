// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KCCONTAINER_H
#define KCCONTAINER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface KCContainer : NSObject

@property (readonly, nonatomic) NSMutableDictionary *data; // ivar: _data
@property (nonatomic) int invalid_images; // ivar: _invalid_images
@property (nonatomic) int pid; // ivar: _pid
@property (readonly, nonatomic) NSUInteger tag; // ivar: _tag
@property (readonly, nonatomic) NSMutableDictionary *truncated_threads; // ivar: _truncated_threads
@property (readonly, nonatomic) unsigned int type; // ivar: _type
@property (nonatomic) int unindexed_frames; // ivar: _unindexed_frames


-(id)initWithKCData:(struct kcdata_iter )arg0 ;
-(void)omit;


@end


#endif