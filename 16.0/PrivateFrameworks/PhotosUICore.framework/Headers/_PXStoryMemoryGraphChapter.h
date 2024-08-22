// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PXSTORYMEMORYGRAPHCHAPTER_H
#define _PXSTORYMEMORYGRAPHCHAPTER_H

@class NSMutableDictionary, NSDictionary, NSString;
@protocol PXStoryMutableChapter;

#import <Foundation/Foundation.h>


@interface _PXStoryMemoryGraphChapter : NSObject <PXStoryMutableChapter>

 {
    NSMutableDictionary *_graphChapterDictionary;
}


@property (copy, nonatomic) NSDictionary *graphChapterDictionary;
@property (copy, nonatomic) NSString *localizedSubtitle;
@property (copy, nonatomic) NSString *localizedTitle;


-(id)init;


@end


#endif