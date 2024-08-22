// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TKTOKENKEYALGORITHM_H
#define TKTOKENKEYALGORITHM_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface TKTokenKeyAlgorithm : NSObject {
    NSArray *_algorithms;
}




-(BOOL)isAlgorithm:(struct __CFString *)arg0 ;
-(BOOL)supportsAlgorithm:(struct __CFString *)arg0 ;
-(id)initWithAlgorithmsArray:(id)arg0 ;


@end


#endif