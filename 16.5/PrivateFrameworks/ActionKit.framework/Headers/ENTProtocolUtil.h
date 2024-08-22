// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ENTPROTOCOLUTIL_H
#define ENTPROTOCOLUTIL_H


#import <Foundation/Foundation.h>


@interface ENTProtocolUtil : NSObject



+(id)_readValueForField:(id)arg0 fromProtocol:(id)arg1 ;
+(id)readMessage:(id)arg0 fromProtocol:(id)arg1 withResponseTypes:(id)arg2 ;
+(void)_writeValue:(id)arg0 forField:(id)arg1 toProtocol:(id)arg2 ;
+(void)readFromProtocol:(id)arg0 ontoObject:(id)arg1 ;
+(void)sendMessage:(id)arg0 toProtocol:(id)arg1 withArguments:(id)arg2 ;
+(void)skipType:(int)arg0 onProtocol:(id)arg1 ;
+(void)writeObject:(id)arg0 ontoProtocol:(id)arg1 ;


@end


#endif