// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UVRAWXPCDECODER_H
#define UVRAWXPCDECODER_H

@class NSString;
@protocol AnySecureDecoder, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface UVRawXPCDecoder : NSObject <AnySecureDecoder>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *dictionary; // ivar: _dictionary
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)decodeObjectOfClass:(Class)arg0 forKey:(id)arg1 ;
-(id)initWithXpcDictionary:(id)arg0 ;


@end


#endif