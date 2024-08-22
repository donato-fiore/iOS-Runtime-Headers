// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CACTEXTMARKER_H
#define CACTEXTMARKER_H

@class NSData;

#import <Foundation/Foundation.h>


@interface CACTextMarker : NSObject {
    NSUInteger _index;
    NSData *_data;
}




+(BOOL)marker:(id)arg0 precedesMarker:(id)arg1 forUIElement:(id)arg2 ;
+(BOOL)marker:(id)arg0 precedesOrEqualsMarker:(id)arg1 forUIElement:(id)arg2 ;
+(NSUInteger)lengthFromMarker:(id)arg0 toMarker:(id)arg1 forUIElement:(id)arg2 ;
+(id)markerWithData:(id)arg0 ;
+(id)markerWithIndex:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)index;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)data;
-(id)description;
-(id)initWithData:(id)arg0 ;
-(id)initWithIndex:(NSUInteger)arg0 ;
-(void)setData:(id)arg0 ;
-(void)setIndex:(NSUInteger)arg0 ;


@end


#endif