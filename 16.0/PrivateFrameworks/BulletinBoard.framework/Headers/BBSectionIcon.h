// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BBSECTIONICON_H
#define BBSECTIONICON_H

@class NSSet;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BBSectionIcon : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSSet *variants; // ivar: _variants


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_bestVariantForFormat:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)addVariant:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif