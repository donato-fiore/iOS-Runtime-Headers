// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CDHASHUTILITIES_H
#define _CDHASHUTILITIES_H


#import <Foundation/Foundation.h>


@interface _CDHashUtilities : NSObject



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