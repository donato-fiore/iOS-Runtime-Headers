// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRERROR_H
#define MTRERROR_H


#import <Foundation/Foundation.h>


@interface MTRError : NSObject



+(id)errorForCHIPErrorCode:(struct ChipError )arg0 ;
+(id)errorForIMStatus:(*void)arg0 ;
+(struct ChipError )errorToCHIPErrorCode:(id)arg0 ;


@end


#endif