// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASTENCODINGUTILITIES_H
#define ASTENCODINGUTILITIES_H


#import <Foundation/Foundation.h>


@interface ASTEncodingUtilities : NSObject



+(id)MD5ForData:(id)arg0 ;
+(id)MD5ForFileHandle:(id)arg0 ;
+(id)MD5ForString:(id)arg0 ;
+(id)jsonSerializeObject:(id)arg0 error:(*id)arg1 ;
+(id)parseJSONResponseWithData:(id)arg0 error:(*id)arg1 ;


@end


#endif