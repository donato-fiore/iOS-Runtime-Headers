// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSMEDIAARTWORK_H
#define AMSMEDIAARTWORK_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface AMSMediaArtwork : NSObject

@property (readonly, nonatomic) NSDictionary *artworkDictionary; // ivar: _artworkDictionary
@property (readonly, nonatomic) CGSize artworkSize;


-(CGFloat)height;
-(CGFloat)width;
-(NSUInteger)_qualityForFormat:(id)arg0 ;
-(id)URLString;
-(id)URLWithSize:(struct CGSize )arg0 ;
-(id)URLWithSize:(struct CGSize )arg0 cropStyle:(id)arg1 format:(id)arg2 ;
-(id)URLWithSize:(struct CGSize )arg0 cropStyle:(id)arg1 format:(id)arg2 quality:(NSUInteger)arg3 ;
-(id)initWithDictionary:(id)arg0 ;
-(struct CGColor *)colorWithKind:(id)arg0 ;


@end


#endif