// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GPSERROR_H
#define GPSERROR_H


#import <Foundation/Foundation.h>


@interface GpsError : NSObject



+(BOOL)setError:(*id)arg0 withCode:(int)arg1 ;
+(BOOL)setError:(*id)arg0 withCode:(int)arg1 format:(id)arg2 ;
+(BOOL)setErrorTestUnavailable:(*id)arg0 ;


@end


#endif