// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CDHASHUTILITIES_H
#define _CDHASHUTILITIES_H


#import <Foundation/Foundation.h>


@interface _CDHashUtilities : NSObject



+(NSUInteger)FNV1aForData:(id)arg0 ;
+(NSUInteger)FNV1aForString:(id)arg0 ;
+(id)hexStringFromData:(id)arg0 ;
+(id)md5ForData:(id)arg0 ;
+(id)md5ForObjectDescription:(id)arg0 ;
+(id)md5ForString:(id)arg0 ;
+(id)md5forDictionary:(id)arg0 error:(*id)arg1 ;
+(id)sha1ForData:(id)arg0 ;
+(id)sha1ForString:(id)arg0 ;
+(id)sha256Hash:(id)arg0 withSalt:(id)arg1 ;


@end


#endif