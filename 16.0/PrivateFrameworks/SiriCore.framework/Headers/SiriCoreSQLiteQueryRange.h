// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRICORESQLITEQUERYRANGE_H
#define SIRICORESQLITEQUERYRANGE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SiriCoreSQLiteQueryRange : NSObject <NSCopying>



@property (readonly, nonatomic) NSUInteger limit; // ivar: _limit
@property (readonly, nonatomic) NSUInteger offset; // ivar: _offset


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithLimit:(NSUInteger)arg0 ;
-(id)initWithLimit:(NSUInteger)arg0 offset:(NSUInteger)arg1 ;


@end


#endif