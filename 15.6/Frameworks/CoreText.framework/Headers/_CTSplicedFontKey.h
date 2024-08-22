// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CTSPLICEDFONTKEY_H
#define _CTSPLICEDFONTKEY_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _CTSplicedFontKey : NSObject <NSCopying>

 {
    NSUInteger _hash;
}


@property (retain, nonatomic) NSString *design; // ivar: _design
@property (nonatomic) unsigned int grade; // ivar: _grade
@property (nonatomic) BOOL ignoreLegibilityWeight; // ivar: _ignoreLegibilityWeight
@property (retain, nonatomic) NSString *language; // ivar: _language
@property (nonatomic) NSInteger legibilityWeight; // ivar: _legibilityWeight
@property (nonatomic) CGFloat lineHeightRatio; // ivar: _lineHeightRatio
@property (nonatomic) unsigned int modifier; // ivar: _modifier
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) unsigned int platform; // ivar: _platform
@property (nonatomic) NSUInteger sizeCategory; // ivar: _sizeCategory
@property (nonatomic) CGFloat weight; // ivar: _weight
@property (nonatomic) CGFloat width; // ivar: _width


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(void)dealloc;


@end


#endif