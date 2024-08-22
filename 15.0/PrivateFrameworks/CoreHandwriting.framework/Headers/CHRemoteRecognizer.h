// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHREMOTERECOGNIZER_H
#define CHREMOTERECOGNIZER_H

@class NSXPCConnection, NSCharacterSet, NSDictionary, NSString, NSLocale, NSArray;
@protocol CHRecognizing;

#import <Foundation/Foundation.h>


@interface CHRemoteRecognizer : NSObject <CHRecognizing>



@property (readonly, nonatomic) NSXPCConnection *_connection; // ivar: __connection
@property (retain, nonatomic) NSCharacterSet *activeCharacterSet;
@property (readonly, copy, nonatomic) NSDictionary *activeCharacterSetPerLocale; // ivar: _activeCharacterSetPerLocale
@property (nonatomic) int autoCapitalizationMode; // ivar: _autoCapitalizationMode
@property (nonatomic) int autoCorrectionMode; // ivar: _autoCorrectionMode
@property (nonatomic) int contentType; // ivar: _contentType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL enableCachingIfAvailable; // ivar: _enableCachingIfAvailable
@property (readonly, nonatomic) BOOL enableGen2CharacterLMIfAvailable; // ivar: _enableGen2CharacterLMIfAvailable
@property (readonly, nonatomic) BOOL enableGen2ModelIfAvailable; // ivar: _enableGen2ModelIfAvailable
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSLocale *locale;
@property (readonly, copy, nonatomic) NSArray *locales; // ivar: _locales
@property (nonatomic) NSUInteger maxRecognitionResultCount; // ivar: _maxRecognitionResultCount
@property (nonatomic) CGSize minimumDrawingSize; // ivar: _minimumDrawingSize
@property (nonatomic) NSInteger priority; // ivar: _priority
@property (readonly, nonatomic) int recognitionMode; // ivar: _recognitionMode
@property (nonatomic) BOOL shouldUseTextReplacements; // ivar: _shouldUseTextReplacements
@property (readonly) Class superclass;


+(NSInteger)absoluteMaxStrokeCountPerRequest;
+(NSInteger)maxRequestStrokeCountForLocale:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToRemoteRecognizer:(id)arg0 ;
-(id)_recognitionRequestWithDrawing:(id)arg0 options:(id)arg1 ;
-(id)_recognitionResultForRequest:(id)arg0 error:(*id)arg1 ;
-(id)initWithMode:(int)arg0 locale:(id)arg1 ;
-(id)initWithMode:(int)arg0 locale:(id)arg1 recognizerOptions:(id)arg2 ;
-(id)initWithMode:(int)arg0 locales:(id)arg1 activeCharacterSetPerLocale:(id)arg2 recognizerOptions:(id)arg3 ;
-(id)textRecognitionResultForDrawing:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)transcriptionPathsForTokenizedTextResult:(id)arg0 withHistory:(id)arg1 scores:(*id)arg2 error:(*id)arg3 ;
-(void)_setupXPCConnectionIfNeeded;
-(void)_teardownXPCConnection;
-(void)dealloc;


@end


#endif