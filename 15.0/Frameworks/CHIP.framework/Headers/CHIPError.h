// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHIPERROR_H
#define CHIPERROR_H


#import <Foundation/Foundation.h>


@interface CHIPError : NSObject



+(id)errorForCHIPErrorCode:(int)arg0 ;
+(int)errorToCHIPErrorCode:(id)arg0 ;


@end


#endif