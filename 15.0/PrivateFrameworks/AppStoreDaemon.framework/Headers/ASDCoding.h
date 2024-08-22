// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASDCODING_H
#define ASDCODING_H


#import <Foundation/Foundation.h>


@interface ASDCoding : NSObject



+(BOOL)securelyEncodeObject:(id)arg0 forKey:(id)arg1 withCoder:(id)arg2 error:(*id)arg3 ;
+(id)_findNonSecureClassesFromObject:(id)arg0 ;
+(id)createDataByEncodingError:(id)arg0 ;
+(id)createErrorByDecodingData:(id)arg0 ;


@end


#endif