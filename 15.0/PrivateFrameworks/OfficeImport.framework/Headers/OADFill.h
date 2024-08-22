// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OADFILL_H
#define OADFILL_H

@protocol NSCopying;


#import "OADProperties.h"

@interface OADFill : OADProperties <NSCopying>

 {
    BOOL mDefinedByStyle;
}


@property BOOL definedByStyle; // ivar: _definedByStyle


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isOverridden;
-(BOOL)usesPlaceholderColor;
-(NSUInteger)hash;
-(float)alpha;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(void)setStyleColor:(id)arg0 ;


@end


#endif