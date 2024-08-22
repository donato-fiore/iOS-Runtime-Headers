// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLASTDOORBASICAUDIOMESSAGE_H
#define BLASTDOORBASICAUDIOMESSAGE_H

@class NSAttributedString, NSString, NSArray;

#import <Foundation/Foundation.h>


@interface BlastDoorBasicAudioMessage : NSObject {
    ? basicAudioMessage;
}


@property (nonatomic, readonly) NSAttributedString *content;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSArray *inlineAudioMessages;
@property (nonatomic, readonly) NSArray *participantDestinationIdentifiers;


-(id)init;


@end


#endif