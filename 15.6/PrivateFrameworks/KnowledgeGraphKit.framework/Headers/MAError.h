// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MAERROR_H
#define MAERROR_H


#import <Foundation/Foundation.h>


@interface MAError : NSObject



+(id)errorForCode:(NSInteger)arg0 ;
+(id)errorWithCode:(NSInteger)arg0 description:(id)arg1 ;


@end


#endif