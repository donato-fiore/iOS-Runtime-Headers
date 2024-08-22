// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NLNUMBERGENERATOR_H
#define NLNUMBERGENERATOR_H


#import <Foundation/Foundation.h>


@interface NLNumberGenerator : NSObject {
    NSUInteger state;
}




-(NSUInteger)numberInRange:(struct _NSRange )arg0 ;
-(id)init;
-(void)reset;
-(void)resetWithSeed:(NSUInteger)arg0 ;


@end


#endif