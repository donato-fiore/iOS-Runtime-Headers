// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRIPEEKENUMERATOR_H
#define TRIPEEKENUMERATOR_H

@class NSEnumerator;

#import <Foundation/Foundation.h>


@interface TRIPeekEnumerator : NSObject {
    NSEnumerator *_underlyingEnum;
    id *_peek;
}




-(id)initWithEnumerator:(id)arg0 ;
-(id)nextObject;
-(id)peekNextObject;


@end


#endif