// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TTSSPEECHVOICE_H
#define TTSSPEECHVOICE_H

@class NSString;
@protocol NSSecureCoding, NSCopying, TTSSpeechService;

#import <Foundation/Foundation.h>


@interface TTSSpeechVoice : NSObject <NSSecureCoding, NSCopying>

 {
    id<TTSSpeechService> *_service;
}


@property (nonatomic) BOOL canBeDownloaded; // ivar: _canBeDownloaded
@property (readonly, nonatomic) BOOL excludeInAvailableVoiceList; // ivar: _excludeInAvailableVoiceList
@property (nonatomic) NSInteger footprint; // ivar: _footprint
@property (nonatomic) NSInteger gender; // ivar: _gender
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isCombinedFootprint; // ivar: _isCombinedFootprint
@property (readonly, nonatomic) BOOL isDefault; // ivar: _isDefault
@property (readonly, nonatomic) BOOL isFallbackDefault; // ivar: _isFallbackDefault
@property (nonatomic) BOOL isSystemVoice; // ivar: _isSystemVoice
@property (retain, nonatomic) NSString *language; // ivar: _language
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSString *nonCombinedVoiceId; // ivar: _nonCombinedVoiceId
@property (retain, nonatomic) NSString *serviceIdentifier; // ivar: _serviceIdentifier


+(BOOL)supportsSecureCoding;
+(id)localizedName:(id)arg0 forLanguage:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)localizedNameForLanguage:(id)arg0 ;
-(id)service;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setService:(id)arg0 ;


@end


#endif