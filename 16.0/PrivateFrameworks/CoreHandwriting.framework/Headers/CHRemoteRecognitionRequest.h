// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHREMOTERECOGNITIONREQUEST_H
#define CHREMOTERECOGNITIONREQUEST_H

@class NSDictionary, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CHDrawing.h"

@interface CHRemoteRecognitionRequest : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSDictionary *activeCharacterSetPerLocale; // ivar: _activeCharacterSetPerLocale
@property (nonatomic) int autoCapitalizationMode; // ivar: _autoCapitalizationMode
@property (nonatomic) int autoCorrectionMode; // ivar: _autoCorrectionMode
@property (nonatomic) int contentType; // ivar: _contentType
@property (copy, nonatomic) CHDrawing *drawing; // ivar: _drawing
@property (nonatomic) BOOL enableCachingIfAvailable; // ivar: _enableCachingIfAvailable
@property (nonatomic) BOOL enableGen2CharacterLMIfAvailable; // ivar: _enableGen2CharacterLMIfAvailable
@property (nonatomic) BOOL enableGen2ModelIfAvailable; // ivar: _enableGen2ModelIfAvailable
@property (nonatomic) BOOL enableStrokeReordering; // ivar: _enableStrokeReordering
@property (nonatomic) BOOL hasBeenSubmitted; // ivar: _hasBeenSubmitted
@property (copy, nonatomic) NSArray *locales; // ivar: _locales
@property (nonatomic) NSUInteger maxRecognitionResultCount; // ivar: _maxRecognitionResultCount
@property (nonatomic) CGSize minimumDrawingSize; // ivar: _minimumDrawingSize
@property (copy, nonatomic) NSDictionary *options; // ivar: _options
@property (copy, nonatomic) NSDictionary *parametersOverride; // ivar: _parametersOverride
@property (nonatomic) NSInteger priority; // ivar: _priority
@property (nonatomic) int recognitionMode; // ivar: _recognitionMode
@property (readonly, nonatomic) BOOL shouldRemoveUnnaturalGaps;
@property (nonatomic) BOOL shouldUseTextReplacements; // ivar: _shouldUseTextReplacements


+(BOOL)supportsSecureCoding;
+(id)loadFromFile:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToRemoteRecognitionRequest:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLocales:(id)arg0 recognitionMode:(int)arg1 drawing:(id)arg2 options:(id)arg3 priority:(NSInteger)arg4 ;
-(id)recognizerConfigurationKeyWithLocale:(id)arg0 ;
-(id)writeToFileInFolder:(id)arg0 basename:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif