// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACUISEDGEINSETS_H
#define ACUISEDGEINSETS_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_TtC18ActivityUIServices18ActivityEdgeInsets.h"

@interface ACUISEdgeInsets : NSObject <NSCopying, NSSecureCoding>

 {
    _TtC18ActivityUIServices18ActivityEdgeInsets *_edgeInsets;
}


@property (nonatomic) CGFloat bottom;
@property (nonatomic) CGFloat leading;
@property (nonatomic) CGFloat top;
@property (nonatomic) CGFloat trailing;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_edgeInsets;
-(id)_initWithEdgeInsets:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTop:(CGFloat)arg0 leading:(CGFloat)arg1 bottom:(CGFloat)arg2 trailing:(CGFloat)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif