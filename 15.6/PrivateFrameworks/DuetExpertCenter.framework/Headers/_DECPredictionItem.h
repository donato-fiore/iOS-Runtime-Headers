// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DECPREDICTIONITEM_H
#define _DECPREDICTIONITEM_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "_DECItem.h"

@interface _DECPredictionItem : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) CGFloat confidence; // ivar: _confidence
@property (readonly, nonatomic) _DECItem *item; // ivar: _item


+(BOOL)supportsSecureCoding;
+(id)predictionItemWithItem:(id)arg0 confidence:(CGFloat)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithItem:(id)arg0 confidence:(CGFloat)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif