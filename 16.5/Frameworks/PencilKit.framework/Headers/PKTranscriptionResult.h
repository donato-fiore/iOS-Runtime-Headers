// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKTRANSCRIPTIONRESULT_H
#define PKTRANSCRIPTIONRESULT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PKTranscriptionResult : NSObject

@property (readonly, nonatomic) BOOL didShowHUD; // ivar: _didShowHUD
@property (readonly, copy, nonatomic) NSString *transcription; // ivar: _transcription


-(id)initWithTranscription:(id)arg0 didShowHUD:(BOOL)arg1 ;


@end


#endif