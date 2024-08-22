// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OADINDEXEDCOLOR_H
#define OADINDEXEDCOLOR_H



#import "OADColor.h"

@interface OADIndexedColor : OADColor {
    NSUInteger mIndex;
}




+(id)indexedColorWithIndex:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)index;
-(id)colorFromPalette:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithIndex:(NSUInteger)arg0 ;


@end


#endif