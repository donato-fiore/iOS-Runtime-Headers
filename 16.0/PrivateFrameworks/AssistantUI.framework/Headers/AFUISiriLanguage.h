// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFUISIRILANGUAGE_H
#define AFUISIRILANGUAGE_H

@class NSString;
@protocol AFUISiriLanguageDelegate;

#import <Foundation/Foundation.h>


@interface AFUISiriLanguage : NSObject

@property (readonly, weak, nonatomic, getter=_delegate) NSObject<AFUISiriLanguageDelegate> *delegate; // ivar: _delegate
@property (nonatomic, getter=_setupAssistantHasCompletedInitialRunAvailable) BOOL setupAssistantHasCompletedInitialRunAvailable; // ivar: _setupAssistantHasCompletedInitialRunAvailable
@property (nonatomic) BOOL setupAssistantHasCompletedInitialRunChecked; // ivar: _setupAssistantHasCompletedInitialRunChecked
@property (copy, nonatomic, setter=_setSpokenLanguageCode:) NSString *spokenLanguageCode; // ivar: _spokenLanguageCode


-(id)_computeSpokenLanguageCode;
-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(void)_currentLocaleDidChange:(id)arg0 ;
-(void)_spokenLanguageDidChange:(id)arg0 ;
-(void)_updateSpokenLanguageCode;
-(void)dealloc;


@end


#endif