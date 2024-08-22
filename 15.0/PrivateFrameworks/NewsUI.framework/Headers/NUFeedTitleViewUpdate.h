// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUFEEDTITLEVIEWUPDATE_H
#define NUFEEDTITLEVIEWUPDATE_H

@class NSString, NSAttributedString, UIImage;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NUFeedTitleViewUpdate : NSObject <NSCopying>



@property (copy, nonatomic) NSString *accessibilityTitle; // ivar: _accessibilityTitle
@property (copy, nonatomic) NSAttributedString *attributedText; // ivar: _attributedText
@property (retain, nonatomic) UIImage *feedImage; // ivar: _feedImage
@property (copy, nonatomic) NSString *feedName; // ivar: _feedName
@property (nonatomic) CGFloat lingerTimeInterval; // ivar: _lingerTimeInterval
@property (nonatomic) NSUInteger storyCount; // ivar: _storyCount
@property (nonatomic) NSUInteger type; // ivar: _type
@property (readonly, nonatomic) NSUInteger updateType; // ivar: _updateType


+(id)feedTitleViewUpdateCheckingForNewStoriesForType:(NSUInteger)arg0 ;
+(id)feedTitleViewUpdateEmptyState;
+(id)feedTitleViewUpdateEmptyStateForType:(NSUInteger)arg0 ;
+(id)feedTitleViewUpdateForAttributedText:(id)arg0 ;
+(id)feedTitleViewUpdateForAttributedText:(id)arg0 forType:(NSUInteger)arg1 ;
+(id)feedTitleViewUpdateForCheckingForNewStories;
+(id)feedTitleViewUpdateForFeedImage:(id)arg0 accessibilityTitle:(id)arg1 ;
+(id)feedTitleViewUpdateForFeedName:(id)arg0 ;
+(id)feedTitleViewUpdateForNewStoriesWithStoryCount:(NSUInteger)arg0 ;
+(id)feedTitleViewUpdateNewStoriesWithStoryForType:(NSUInteger)arg0 storyCount:(NSUInteger)arg1 ;
+(id)feedTitleViewUpdateNewStoriesWithStoryForType:(NSUInteger)arg0 storyCount:(NSUInteger)arg1 linger:(BOOL)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)convertToTitleViewUpdateWithCompact:(BOOL)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithType:(NSUInteger)arg0 updateType:(NSUInteger)arg1 ;


@end


#endif