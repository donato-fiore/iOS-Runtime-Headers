// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEARCHUIAVATARIMAGE_H
#define SEARCHUIAVATARIMAGE_H

@class NSArray, NSString;
@protocol CNCancelable;


#import "SearchUIImage.h"

@interface SearchUIAvatarImage : SearchUIImage

@property (copy, nonatomic) NSArray *contactIdentifiers; // ivar: _contactIdentifiers
@property (retain, nonatomic) NSString *letters; // ivar: _letters
@property (retain) NSObject<CNCancelable> *renderingToken; // ivar: _renderingToken


+(id)avatarImageRenderer;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithContactImage:(id)arg0 ;
-(id)initWithMonogramImage:(id)arg0 ;
-(int)defaultCornerRoundingStyle;
-(void)loadImageWithScale:(CGFloat)arg0 isDarkStyle:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)setDefaultSizeIfNecessary;


@end


#endif