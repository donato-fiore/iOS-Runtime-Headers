// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASCPAIR_H
#define ASCPAIR_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface ASCPair : NSObject <NSCopying>



@property (readonly, nonatomic) id *first; // ivar: _first
@property (readonly, nonatomic) id *second; // ivar: _second


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithFirst:(id)arg0 second:(id)arg1 ;


@end


#endif