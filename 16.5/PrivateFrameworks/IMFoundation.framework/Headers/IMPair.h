// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMPAIR_H
#define IMPAIR_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface IMPair : NSObject <NSCopying>



@property (retain) id *first; // ivar: _first
@property (retain) id *second; // ivar: _second


+(id)pairWithFirst:(id)arg0 second:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithFirst:(id)arg0 second:(id)arg1 ;
-(void)dealloc;


@end


#endif