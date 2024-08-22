// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BPSTUPLE_H
#define BPSTUPLE_H


#import <Foundation/Foundation.h>


@interface BPSTuple : NSObject

@property (readonly, nonatomic) id *first; // ivar: _first
@property (readonly, nonatomic) id *second; // ivar: _second


+(id)new;
-(id)description;
-(id)init;
-(id)initWithFirst:(id)arg0 second:(id)arg1 ;


@end


#endif