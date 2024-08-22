// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PIREFRAMESUBJECT_H
#define PIREFRAMESUBJECT_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PIReframeSubject : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) CGRect bounds; // ivar: _bounds
@property (readonly, nonatomic) CGFloat confidence; // ivar: _confidence
@property (nonatomic) NSInteger edgeBleed; // ivar: _edgeBleed
@property (nonatomic) CGRect expandedBounds; // ivar: _expandedBounds
@property (readonly, nonatomic) NSInteger identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isAnimal;
@property (readonly, nonatomic) BOOL isHuman;
@property (readonly, nonatomic) NSInteger source; // ivar: _source
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 source:(NSInteger)arg1 identifier:(NSInteger)arg2 confidence:(CGFloat)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif