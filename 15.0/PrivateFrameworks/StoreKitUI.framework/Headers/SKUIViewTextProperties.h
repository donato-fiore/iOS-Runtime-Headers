// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIVIEWTEXTPROPERTIES_H
#define SKUIVIEWTEXTPROPERTIES_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SKUIViewTextProperties : NSObject <NSCopying>



@property (nonatomic) CGFloat baselineOffsetFromBottom; // ivar: _baselineOffsetFromBottom
@property (nonatomic) CGFloat desiredOffsetTop; // ivar: _desiredOffsetTop
@property (nonatomic) CGFloat firstBaselineOffset; // ivar: _firstBaselineOffset


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithStringLayout:(id)arg0 ;
-(id)initWithTextLayout:(id)arg0 isExpanded:(BOOL)arg1 ;


@end


#endif