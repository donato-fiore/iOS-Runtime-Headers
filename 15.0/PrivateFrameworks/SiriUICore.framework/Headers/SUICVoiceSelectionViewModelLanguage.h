// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUICVOICESELECTIONVIEWMODELLANGUAGE_H
#define SUICVOICESELECTIONVIEWMODELLANGUAGE_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SUICVoiceSelectionViewModelLanguage : NSObject <NSCopying>



@property (readonly, nonatomic) BOOL isCurrentOutputLanguage; // ivar: _isCurrentOutputLanguage
@property (readonly, copy, nonatomic) NSString *languageCode; // ivar: _languageCode
@property (readonly, copy, nonatomic) NSString *localizedDisplayName; // ivar: _localizedDisplayName


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithLanguageCode:(id)arg0 localizedDisplayName:(id)arg1 isCurrentOutputLanguage:(BOOL)arg2 ;


@end


#endif