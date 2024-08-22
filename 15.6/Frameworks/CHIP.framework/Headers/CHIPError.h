// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPERROR_H
#define CHIPERROR_H


#import <Foundation/Foundation.h>


@interface CHIPError : NSObject



+(id)errorForCHIPErrorCode:(struct ChipError )arg0 ;
+(id)errorForIMStatus:(*void)arg0 ;
+(struct ChipError )errorToCHIPErrorCode:(id)arg0 ;


@end


#endif