// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXPBCGRECTWRAPPER_H
#define ATXPBCGRECTWRAPPER_H

@class PBCodable;
@protocol NSCopying;



@interface ATXPBCGRectWrapper : PBCodable <NSCopying>



@property (nonatomic) CGFloat height; // ivar: _height
@property (nonatomic) CGFloat width; // ivar: _width
@property (nonatomic) CGFloat x; // ivar: _x
@property (nonatomic) CGFloat y; // ivar: _y


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif