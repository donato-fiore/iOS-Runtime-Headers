// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXKONAVOICE_H
#define AXKONAVOICE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "AXKonaParameters.h"

@interface AXKonaVoice : NSObject

@property (nonatomic) NSInteger eciVoiceNumber; // ivar: _eciVoiceNumber
@property (readonly, nonatomic) NSString *identifier;
@property (nonatomic) NSUInteger konaLanguage; // ivar: _konaLanguage
@property (retain, nonatomic) NSString *languageCode; // ivar: _languageCode
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) AXKonaParameters *parameters; // ivar: _parameters




@end


#endif