// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVSPEECHSYNTHESISPROVIDERVOICE_H
#define AVSPEECHSYNTHESISPROVIDERVOICE_H

@class NSString, NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface AVSpeechSynthesisProviderVoice : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) NSInteger age; // ivar: _age
@property (nonatomic) NSInteger gender; // ivar: _gender
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSArray *primaryLanguages; // ivar: _primaryLanguages
@property (retain, nonatomic) NSArray *supportedLanguages; // ivar: _supportedLanguages
@property (retain, nonatomic) NSString *version; // ivar: _version
@property (nonatomic) NSInteger voiceSize; // ivar: _voiceSize


+(BOOL)supportsSecureCoding;
+(void)initialize;
+(void)updateSpeechVoices;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 identifier:(id)arg1 primaryLanguages:(id)arg2 supportedLanguages:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif