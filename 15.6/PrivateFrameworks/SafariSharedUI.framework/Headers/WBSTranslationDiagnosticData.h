// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSTRANSLATIONDIAGNOSTICDATA_H
#define WBSTRANSLATIONDIAGNOSTICDATA_H

@class NSMutableArray, NSString, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface WBSTranslationDiagnosticData : NSObject <NSCopying>

 {
    NSMutableArray *_extractedParagraphs;
    NSMutableArray *_translatedParagraphs;
}


@property (copy, nonatomic) NSString *URLString; // ivar: _URLString
@property (readonly, copy, nonatomic) NSArray *errors; // ivar: _errors
@property (copy, nonatomic) NSString *errorsAsJSON; // ivar: _errorsAsJSON
@property (readonly, copy, nonatomic) NSArray *extractedParagraphs;
@property (copy, nonatomic) NSString *extractedParagraphsAsJSON; // ivar: _extractedParagraphsAsJSON
@property (readonly, copy, nonatomic) NSArray *translatedParagraphs;
@property (copy, nonatomic) NSString *translatedParagraphsAsJSON; // ivar: _translatedParagraphsAsJSON


-(id)_createFileForContents:(id)arg0 fileName:(id)arg1 inDirectory:(id)arg2 ;
-(id)_destinationDirectory;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)saveDiagnosticDataAsTemporaryFiles;
-(void)addError:(id)arg0 forParagraphIdentifier:(id)arg1 ;
-(void)addExtractedParagraphs:(id)arg0 ;
-(void)addTranslatedParagraph:(id)arg0 ;


@end


#endif