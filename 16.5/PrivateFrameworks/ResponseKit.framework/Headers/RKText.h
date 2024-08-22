// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RKTEXT_H
#define RKTEXT_H

@class NSMutableArray, NSString;

#import <Foundation/Foundation.h>


@interface RKText : NSObject

@property (retain) NSMutableArray *annotations; // ivar: _annotations
@property (retain) NSString *languageID; // ivar: _languageID
@property (retain) NSString *processedText; // ivar: _processedText
@property (retain) NSString *string; // ivar: _string
@property BOOL trainVerbatim; // ivar: _trainVerbatim
@property CGFloat trainingWeight; // ivar: _trainingWeight


+(NSUInteger)annotationTypeFromName:(id)arg0 ;
+(NSUInteger)polarityTypeFromName:(id)arg0 ;
+(id)annotationNameFromType:(NSUInteger)arg0 ;
+(id)defaultDataProvider;
+(id)polarityNameFromType:(NSUInteger)arg0 ;
+(void)initialize;
-(BOOL)cleanupData;
-(NSUInteger)annotatedPolarity;
-(id)init;
-(id)initWithString:(id)arg0 andLanguageIdentifier:(id)arg1 ;
-(id)initWithString:(id)arg0 andLanguageIdentifier:(id)arg1 trainingWeight:(CGFloat)arg2 trainVerbatim:(BOOL)arg3 ;
-(id)lsmText;
-(id)subTextWithRange:(struct _NSRange )arg0 ;
-(id)subTextsByPolarity;
-(id)taggedText;
-(void)annotateRange:(struct _NSRange )arg0 type:(NSUInteger)arg1 ;
-(void)annotateRange:(struct _NSRange )arg0 type:(NSUInteger)arg1 machineGenerated:(BOOL)arg2 ;
-(void)enumerateAnnotationsInRange:(struct _NSRange )arg0 usingBlock:(id)arg1 ;


@end


#endif