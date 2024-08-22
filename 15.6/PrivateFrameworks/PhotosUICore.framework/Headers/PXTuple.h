// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXTUPLE_H
#define PXTUPLE_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PXTuple : NSObject <NSCopying>

 {
    NSUInteger _hash;
}


@property (readonly, nonatomic) NSArray *objects; // ivar: _objects


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithObjects:(id)arg0 ;


@end


#endif