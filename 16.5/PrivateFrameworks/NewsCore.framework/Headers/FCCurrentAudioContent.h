// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCCURRENTAUDIOCONTENT_H
#define FCCURRENTAUDIOCONTENT_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface FCCurrentAudioContent : NSObject <NSCopying>

 {
    NSArray *_recentHeadlines;
    NSArray *_featuredHeadlines;
}




-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif