// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCHSTYLEANDPROPERTYPAIR_H
#define TSCHSTYLEANDPROPERTYPAIR_H

@class TSSStyle;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSCHStyleAndPropertyPair : NSObject <NSCopying>



@property (readonly, nonatomic) int property; // ivar: _property
@property (readonly, nonatomic) TSSStyle *style; // ivar: _style


+(id)pairWithStyle:(id)arg0 property:(int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithStyle:(id)arg0 property:(int)arg1 ;


@end


#endif