// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCROBRAILLETRANSLATIONMANAGER_H
#define SCROBRAILLETRANSLATIONMANAGER_H

@class NSString, BRLTTranslationService;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SCROBrailleTranslationManager : NSObject

@property (nonatomic) BOOL alwaysUsesNemethCodeForTechnicalText; // ivar: _alwaysUsesNemethCodeForTechnicalText
@property (copy, nonatomic) NSString *defaultLanguage; // ivar: _queue_defaultLanguage
@property (readonly, nonatomic) BOOL primaryTableSupportsContractedBraille; // ivar: _tableSupportsContractedBraille
@property (readonly, nonatomic) BOOL primaryTableSupportsEightDotBraille; // ivar: _tableSupportsEightDotBraille
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) BRLTTranslationService *translationService; // ivar: _translationService


+(id)sharedManager;
-(BOOL)primaryTableSupportsRoundTripping;
-(id)init;
-(id)printBrailleForText:(id)arg0 language:(id)arg1 mode:(NSUInteger)arg2 textPositionsRange:(struct _NSRange )arg3 locations:(*id)arg4 ;
-(id)serviceIdentifier;
-(id)textForPrintBraille:(id)arg0 language:(id)arg1 mode:(NSUInteger)arg2 locations:(*id)arg3 ;
-(void)loadTranslatorWithServiceIdentifier:(id)arg0 ;
-(void)loadTranslatorWithServiceIdentifier:(id)arg0 forUnitTesting:(BOOL)arg1 ;


@end


#endif