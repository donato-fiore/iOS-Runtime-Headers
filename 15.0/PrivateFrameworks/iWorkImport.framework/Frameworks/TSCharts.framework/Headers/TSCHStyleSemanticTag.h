// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCHSTYLESEMANTICTAG_H
#define TSCHSTYLESEMANTICTAG_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSCHStyleSemanticTag : NSObject <NSCopying>



@property (readonly, nonatomic) NSUInteger index; // ivar: _index
@property (readonly, nonatomic) BOOL isReferenceLine;
@property (readonly, nonatomic) BOOL isSeries;
@property (readonly, nonatomic) Class styleClass;
@property (readonly, nonatomic) int type; // ivar: _type


+(id)styleSemanticTagWithType:(int)arg0 index:(NSUInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithType:(int)arg0 index:(NSUInteger)arg1 ;


@end


#endif