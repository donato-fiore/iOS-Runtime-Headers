// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ANERROR_H
#define ANERROR_H


#import <Foundation/Foundation.h>


@interface ANError : NSObject



+(id)_descriptionForErrorCode:(NSInteger)arg0 ;
+(id)errorWithDomain:(id)arg0 code:(NSInteger)arg1 ;
+(id)errorWithDomain:(id)arg0 code:(NSInteger)arg1 description:(id)arg2 ;


@end


#endif