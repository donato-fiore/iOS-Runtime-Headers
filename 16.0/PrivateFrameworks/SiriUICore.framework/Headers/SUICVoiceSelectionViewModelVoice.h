// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUICVOICESELECTIONVIEWMODELVOICE_H
#define SUICVOICESELECTIONVIEWMODELVOICE_H

@class NSString, AFVoiceInfo;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SUICVoiceSelectionViewModelVoice : NSObject <NSCopying>



@property (readonly, nonatomic) *CGColor associatedCGColor;
@property (readonly, nonatomic) BOOL isCurrentSiriVoice; // ivar: _isCurrentSiriVoice
@property (readonly, copy, nonatomic) NSString *localizedDisplayName;
@property (readonly, copy, nonatomic) AFVoiceInfo *voiceInfo; // ivar: _voiceInfo


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithVoice:(id)arg0 isCurrentSiriVoice:(BOOL)arg1 ;


@end


#endif