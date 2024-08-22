// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MAPSSUGGESTIONSETAREQUIREMENTS_H
#define MAPSSUGGESTIONSETAREQUIREMENTS_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MapsSuggestionsETARequirements : NSObject <NSCopying>



@property (readonly, nonatomic) CGFloat maxAge; // ivar: _maxAge
@property (readonly, nonatomic) CGFloat maxDistance; // ivar: _maxDistance
@property (readonly, nonatomic) CGFloat minAccuracy; // ivar: _minAccuracy


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithMaxAge:(CGFloat)arg0 maxDistance:(CGFloat)arg1 minAccuracy:(CGFloat)arg2 ;


@end


#endif