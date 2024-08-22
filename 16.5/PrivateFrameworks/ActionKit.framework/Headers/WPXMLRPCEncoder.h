// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WPXMLRPCENCODER_H
#define WPXMLRPCENCODER_H

@class NSFileHandle, NSNumber, NSString, NSData, NSArray;

#import <Foundation/Foundation.h>


@interface WPXMLRPCEncoder : NSObject {
    NSFileHandle *_streamingCacheFile;
    BOOL _isResponse;
    BOOL _isFault;
    NSNumber *_faultCode;
    NSString *_faultString;
}


@property (readonly, nonatomic) NSData *body;
@property (readonly, nonatomic) NSString *method; // ivar: _method
@property (readonly, nonatomic) NSArray *parameters; // ivar: _parameters


-(BOOL)encodeToFile:(id)arg0 error:(*id)arg1 ;
-(id)dataEncodedWithError:(*id)arg0 ;
-(id)init;
-(id)initWithMethod:(id)arg0 andParameters:(id)arg1 ;
-(id)initWithResponseFaultCode:(id)arg0 andString:(id)arg1 ;
-(id)initWithResponseParams:(id)arg0 ;
-(id)tmpFilePathForCache;
-(void)appendFormat:(id)arg0 ;
-(void)appendString:(id)arg0 ;
-(void)encodeArray:(id)arg0 ;
-(void)encodeBoolean:(struct __CFBoolean *)arg0 ;
-(void)encodeData:(id)arg0 ;
-(void)encodeDate:(id)arg0 ;
-(void)encodeDictionary:(id)arg0 ;
-(void)encodeFileHandle:(id)arg0 ;
-(void)encodeForStreaming;
-(void)encodeInputStream:(id)arg0 ;
-(void)encodeNumber:(id)arg0 ;
-(void)encodeObject:(id)arg0 ;
-(void)encodeString:(id)arg0 omitTag:(BOOL)arg1 ;
-(void)valueTag:(id)arg0 value:(id)arg1 ;


@end


#endif