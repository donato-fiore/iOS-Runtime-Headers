// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCNPROGRAM_H
#define SCNPROGRAM_H

@class NSString, NSMutableDictionary;
@protocol NSCopying, NSSecureCoding, SCNProgramDelegate, MTLLibrary;

#import <Foundation/Foundation.h>


@interface SCNProgram : NSObject <NSCopying, NSSecureCoding>

 {
    NSString *_vertexShader;
    NSString *_fragmentShader;
    NSString *_vertexFunctionName;
    NSString *_fragmentFunctionName;
    NSString *_name;
    NSString *_sourceFile;
    NSMutableDictionary *_semanticInfos;
    BOOL _opaque;
    id *_library;
    id *_delegate;
    NSMutableDictionary *_bufferBindings;
}


@property (nonatomic) NSObject<SCNProgramDelegate> *delegate;
@property (copy, nonatomic) NSString *fragmentFunctionName;
@property (copy, nonatomic) NSString *fragmentShader;
@property (retain, nonatomic) NSObject<MTLLibrary> *library;
@property (nonatomic, getter=isOpaque) BOOL opaque;
@property (copy, nonatomic) NSString *vertexFunctionName;
@property (copy, nonatomic) NSString *vertexShader;


+(BOOL)supportsSecureCoding;
+(id)program;
+(id)programWithLibrary:(id)arg0 ;
-(id)_allSymbolsWithSceneKitSemantic;
-(id)_bufferBindings;
-(id)_optionsForSymbol:(id)arg0 ;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)name;
-(id)semanticForSymbol:(id)arg0 ;
-(id)sourceFile;
-(int)shadingLanguage;
-(void)_customDecodingOfSCNProgram:(id)arg0 ;
-(void)_customEncodingOfSCNProgram:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleBindingOfBufferNamed:(id)arg0 frequency:(NSInteger)arg1 usingBlock:(id)arg2 ;
-(void)setName:(id)arg0 ;
-(void)setSemantic:(id)arg0 forSymbol:(id)arg1 ;
-(void)setSemantic:(id)arg0 forSymbol:(id)arg1 options:(id)arg2 ;
-(void)setSemanticInfos:(id)arg0 ;
-(void)setSourceFile:(id)arg0 ;


@end


#endif