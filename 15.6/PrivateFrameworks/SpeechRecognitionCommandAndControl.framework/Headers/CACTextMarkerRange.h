// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CACTEXTMARKERRANGE_H
#define CACTEXTMARKERRANGE_H


#import <Foundation/Foundation.h>

#import "CACTextMarker.h"

@interface CACTextMarkerRange : NSObject

@property (readonly, nonatomic) CACTextMarker *endMarker; // ivar: _endMarker
@property (readonly, nonatomic) CACTextMarker *startMarker; // ivar: _startMarker


+(id)markerRangeWithArray:(id)arg0 ;
+(id)markerRangeWithNSRange:(struct _NSRange )arg0 ;
+(id)markerRangeWithStartMarker:(id)arg0 endMarker:(id)arg1 ;
+(id)markerRangeWithStartMarker:(id)arg0 endMarker:(id)arg1 forTextElement:(id)arg2 ;
-(BOOL)containsMarker:(id)arg0 forUIElement:(id)arg1 ;
-(BOOL)containsRange:(id)arg0 forUIElement:(id)arg1 ;
-(BOOL)isEmpty;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)array;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithStartMarker:(id)arg0 endMarker:(id)arg1 ;
-(struct _NSRange )nsRange;


@end


#endif