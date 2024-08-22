// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUPICKERASSETPLAYBACKSTYLEFILTER_H
#define PUPICKERASSETPLAYBACKSTYLEFILTER_H

@class NSString;
@protocol PUPickerFilter;

#import <Foundation/Foundation.h>


@interface PUPickerAssetPlaybackStyleFilter : NSObject <PUPickerFilter>



@property (readonly, nonatomic) BOOL allowsAlbums;
@property (readonly, nonatomic) BOOL allowsSearchSuggestions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isValidFilter;
@property (readonly, nonatomic) NSInteger playbackStyle; // ivar: _playbackStyle
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)generatedPossibleAssetTypes;
-(NSUInteger)generatedRequiredAssetTypes;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)generatedAssetPredicate;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPlaybackStyle:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif