// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPSTUPLE_H
#define TPSTUPLE_H


#import <Foundation/Foundation.h>


@interface TPSTuple : NSObject

@property (readonly, nonatomic) id *first; // ivar: _first
@property (readonly, nonatomic) id *second; // ivar: _second


+(id)tupleWithFirst:(id)arg0 second:(id)arg1 ;
-(id)description;
-(id)initWithFirst:(id)arg0 second:(id)arg1 ;


@end


#endif