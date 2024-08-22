// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef APSPAIR_H
#define APSPAIR_H


#import <Foundation/Foundation.h>


@interface APSPair : NSObject

@property (retain, nonatomic) id *first; // ivar: _first
@property (retain, nonatomic) id *second; // ivar: _second


+(id)pairWithFirst:(id)arg0 second:(id)arg1 ;
-(id)initWithFirst:(id)arg0 second:(id)arg1 ;


@end


#endif