// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBPBDISPLAYITEMLAYOUTATTRIBUTES_H
#define SBPBDISPLAYITEMLAYOUTATTRIBUTES_H

@class PBCodable;
@protocol NSCopying;



@interface SBPBDisplayItemLayoutAttributes : PBCodable <NSCopying>

 {
    CGFloat _centerX;
    CGFloat _centerY;
    NSInteger _contentOrientation;
    NSInteger _lastInteractionTime;
    CGFloat _sizeHeight;
    CGFloat _sizeWidth;
    NSInteger _sizingPolicy;
    CGFloat _userConfiguredSizeBeforeOverlappingHeight;
    CGFloat _userConfiguredSizeBeforeOverlappingWidth;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg0 ;


@end


#endif