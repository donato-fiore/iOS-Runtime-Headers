// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLASTDOORAUDIOMESSAGE_H
#define BLASTDOORAUDIOMESSAGE_H

@class NSAttributedString, NSString, NSArray;

#import <Foundation/Foundation.h>


@interface BlastDoorAudioMessage : NSObject {
    ? audioMessage;
}


@property (nonatomic, readonly) NSAttributedString *content;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSArray *inlineAudioMessages;
@property (nonatomic, readonly) NSArray *participantDestinationIdentifiers;


-(id)init;


@end


#endif