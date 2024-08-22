// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INCEXTENSIONERROR_H
#define INCEXTENSIONERROR_H

@class NSError;

#import <Foundation/Foundation.h>


@interface INCExtensionError : NSObject

@property (nonatomic) NSInteger errorCode; // ivar: _errorCode
@property (copy, nonatomic) NSError *underlyingError; // ivar: _underlyingError


-(id)initWithErrorCode:(NSInteger)arg0 underlyingError:(id)arg1 ;


@end


#endif