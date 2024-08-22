// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SPPROTOSERIALIZER_H
#define SPPROTOSERIALIZER_H


#import <Foundation/Foundation.h>


@interface SPProtoSerializer : NSObject



+(id)arrayWithSPPlist:(id)arg0 ;
+(id)dataWithObject:(id)arg0 ;
+(id)dictionaryWithSPPlist:(id)arg0 ;
+(id)numberWithSPProtoSockPuppetObject:(id)arg0 ;
+(id)objectWithData:(id)arg0 ;
+(id)protoSPObjectWithArray:(id)arg0 forKey:(id)arg1 ;
+(id)protoSPObjectWithData:(id)arg0 forKey:(id)arg1 ;
+(id)protoSPObjectWithDictionary:(id)arg0 forKey:(id)arg1 ;
+(id)protoSPObjectWithNumber:(id)arg0 forKey:(id)arg1 ;
+(id)protoSPObjectWithObject:(id)arg0 forKey:(id)arg1 ;
+(id)protoSPObjectWithString:(id)arg0 forKey:(id)arg1 ;
+(id)spPlistWithArray:(id)arg0 ;
+(id)spPlistWithDictionary:(id)arg0 ;


@end


#endif