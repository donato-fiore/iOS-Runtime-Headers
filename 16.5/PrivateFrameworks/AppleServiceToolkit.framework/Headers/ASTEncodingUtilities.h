// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASTENCODINGUTILITIES_H
#define ASTENCODINGUTILITIES_H


#import <Foundation/Foundation.h>


@interface ASTEncodingUtilities : NSObject



+(id)MD5ForFileHandle:(id)arg0 ;
+(id)SHA256HashForString:(id)arg0 ;
+(id)jsonSerializeObject:(id)arg0 error:(*id)arg1 ;
+(id)parseJSONResponseWithData:(id)arg0 error:(*id)arg1 ;


@end


#endif