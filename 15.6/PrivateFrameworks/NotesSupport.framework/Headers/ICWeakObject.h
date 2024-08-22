// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICWEAKOBJECT_H
#define ICWEAKOBJECT_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface ICWeakObject : NSObject <NSCopying>



@property (nonatomic) NSUInteger cachedHash; // ivar: _cachedHash
@property (readonly, weak, nonatomic) id *object; // ivar: _object


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithObject:(id)arg0 ;


@end


#endif