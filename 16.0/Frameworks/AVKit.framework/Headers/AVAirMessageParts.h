// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVAIRMESSAGEPARTS_H
#define AVAIRMESSAGEPARTS_H

@class NSDictionary, NSArray, NSString, NSData;
@protocol AVAirTransportReverseTransformationResultProtocol;

#import <Foundation/Foundation.h>


@interface AVAirMessageParts : NSObject <AVAirTransportReverseTransformationResultProtocol>

 {
    NSDictionary *_uniqueHeaders;
    NSArray *_repeatedHeaders;
}


@property (readonly, nonatomic) id *airMessage;
@property (readonly, nonatomic) id *bodyAsJSON;
@property (readonly, nonatomic) NSDictionary *bodyAsJSONDictionary;
@property (readonly, nonatomic) NSString *bodyAsUTF8Text;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger expectedBodyLength; // ivar: _expectedBodyLength
@property (readonly, nonatomic) NSData *extraData; // ivar: _extraData
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *headers; // ivar: _headers
@property (readonly, nonatomic) BOOL isIncomplete; // ivar: _isIncomplete
@property (readonly, nonatomic) NSData *rawBodyData; // ivar: _rawBodyData
@property (readonly, nonatomic) NSArray *repeatedHeaders;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSData *uncompressedBodyData; // ivar: _uncompressedBodyData
@property (readonly, nonatomic) NSDictionary *uniqueHeaders;
@property (readonly, nonatomic) NSString *version; // ivar: _version


+(id)messagePartsWithData:(id)arg0 lineSeparator:(id)arg1 data:(id)arg2 headerBodySeparator:(id)arg3 data:(id)arg4 bodyLengthKey:(id)arg5 ;
+(void)registerClass:(Class)arg0 forMessageVersion:(id)arg1 ;
-(BOOL)shouldCallReverseTransformerAgain;
-(Class)_matchingClass;
-(id)decompressBodyUsingAlgorithm:(NSInteger)arg0 ;
-(id)decompressBodyUsingNamedAlgorithm:(id)arg0 ;
-(id)initWithVersion:(id)arg0 headers:(id)arg1 expectedBodyLength:(NSInteger)arg2 body:(id)arg3 extra:(id)arg4 ;
-(void)_identifyUniqueAndRepeatedHeadersIfNecessary;
-(void)_setIncomplete;


@end


#endif