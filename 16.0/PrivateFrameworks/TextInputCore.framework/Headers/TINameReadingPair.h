// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TINAMEREADINGPAIR_H
#define TINAMEREADINGPAIR_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TINameReadingPair : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy, nonatomic) NSString *reading; // ivar: _reading


+(id)nameReadingPairWithName:(id)arg0 reading:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithName:(id)arg0 reading:(id)arg1 ;


@end


#endif