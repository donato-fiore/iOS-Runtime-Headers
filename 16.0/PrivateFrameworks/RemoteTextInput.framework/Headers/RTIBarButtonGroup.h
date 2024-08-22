// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RTIBARBUTTONGROUP_H
#define RTIBARBUTTONGROUP_H

@class NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface RTIBarButtonGroup : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSArray *itemWidths; // ivar: _itemWidths
@property (nonatomic) float representativeItemWidth; // ivar: _representativeItemWidth


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif