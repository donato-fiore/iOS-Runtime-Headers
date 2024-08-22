// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSPAIR_H
#define WBSPAIR_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface WBSPair : NSObject <NSCopying>



@property (readonly, nonatomic) id *first; // ivar: _first
@property (readonly, nonatomic) id *second; // ivar: _second


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithFirst:(id)arg0 second:(id)arg1 ;
-(void)getFirst:(*id)arg0 second:(*id)arg1 ;


@end


#endif