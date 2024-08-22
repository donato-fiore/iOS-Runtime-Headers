// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NAIDENTITY_H
#define NAIDENTITY_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NAIdentity : NSObject <NSCopying>



@property (copy, nonatomic) NSArray *characteristics; // ivar: _characteristics


+(id)na_identity;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isObject:(id)arg0 equalToObject:(id)arg1 ;
-(NSUInteger)hash;
-(NSUInteger)hashOfObject:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCharacteristics:(id)arg0 ;


@end


#endif