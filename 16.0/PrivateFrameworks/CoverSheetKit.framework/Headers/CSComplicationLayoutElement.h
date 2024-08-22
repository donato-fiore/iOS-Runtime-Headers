// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSCOMPLICATIONLAYOUTELEMENT_H
#define CSCOMPLICATIONLAYOUTELEMENT_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CSComplicationLayoutElement : NSObject <NSCopying>



@property (readonly, nonatomic) NSUInteger complicationFamily; // ivar: _complicationFamily
@property (readonly, nonatomic) NSInteger gridWidth;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) CGSize size; // ivar: _size


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithIdentifier:(id)arg0 complicationFamily:(NSUInteger)arg1 size:(struct CGSize )arg2 ;


@end


#endif