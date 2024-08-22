// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NAPAIR_H
#define NAPAIR_H


#import <Foundation/Foundation.h>


@interface NAPair : NSObject

@property (readonly) id *first; // ivar: _first
@property (readonly) id *second; // ivar: _second


+(id)pairWithFirst:(id)arg0 second:(id)arg1 ;
-(id)initWithFirst:(id)arg0 second:(id)arg1 ;


@end


#endif