// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FMWEAKWRAPPER_H
#define FMWEAKWRAPPER_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface FMWeakWrapper : NSObject <NSCopying>



@property (weak, nonatomic) id *object; // ivar: _object
@property (nonatomic) NSUInteger objectHash; // ivar: _objectHash


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithObject:(id)arg0 ;


@end


#endif