// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PICURVECONTROLPOINT_H
#define PICURVECONTROLPOINT_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PICurveControlPoint : NSObject <NSCopying>



@property (readonly, nonatomic, getter=isEditable) BOOL editable; // ivar: _editable
@property (readonly, nonatomic) CGFloat x; // ivar: _x
@property (readonly, nonatomic) CGFloat y; // ivar: _y


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithX:(CGFloat)arg0 y:(CGFloat)arg1 editable:(BOOL)arg2 ;


@end


#endif