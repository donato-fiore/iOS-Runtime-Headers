// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGPLAYBACKSTATEPREROLLATTRIBUTES_H
#define PGPLAYBACKSTATEPREROLLATTRIBUTES_H

@class NSDictionary, UIColor;

#import <Foundation/Foundation.h>


@interface PGPlaybackStatePrerollAttributes : NSObject

@property (readonly, nonatomic) NSInteger contentType;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation; // ivar: _dictionaryRepresentation
@property (readonly, nonatomic) UIColor *preferredTintColor;
@property (readonly, nonatomic) CGFloat requiredLinearPlaybackEndTime;


+(id)prerollAttributesForAdContentWithRequiredLinearPlaybackEndTime:(CGFloat)arg0 preferredTintColor:(id)arg1 ;
+(id)prerollAttributesForSponsoredContentWithRequiredLinearPlaybackEndTime:(CGFloat)arg0 preferredTintColor:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithRequiredLinearPlaybackEndTime:(CGFloat)arg0 preferredTintColor:(id)arg1 contentType:(NSInteger)arg2 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif