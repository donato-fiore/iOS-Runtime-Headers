// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSUIVOICESHORTCUTCARD_H
#define VSUIVOICESHORTCUTCARD_H

@class INIntent, INIntentResponse, NSArray, NSString;


#import "VSUIAsyncLoadingCard.h"

@interface VSUIVoiceShortcutCard : VSUIAsyncLoadingCard

@property (readonly, nonatomic) INIntent *intent; // ivar: _intent
@property (readonly, nonatomic) INIntentResponse *intentResponse; // ivar: _intentResponse
@property (readonly, nonatomic) NSArray *sectionCommands; // ivar: _sectionCommands
@property (readonly, nonatomic) NSString *shortcutIdentifier; // ivar: _shortcutIdentifier


-(id)cardIdentifier;
-(id)initWithCard:(id)arg0 ;
-(void)_configureWithCard:(id)arg0 ;
-(void)loadCardWithCompletion:(id)arg0 ;
-(void)loadCardWithContent:(id)arg0 completion:(id)arg1 ;


@end


#endif