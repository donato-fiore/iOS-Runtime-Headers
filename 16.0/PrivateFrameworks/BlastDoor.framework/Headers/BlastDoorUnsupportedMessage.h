// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLASTDOORUNSUPPORTEDMESSAGE_H
#define BLASTDOORUNSUPPORTEDMESSAGE_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface BlastDoorUnsupportedMessage : NSObject {
    ? unsupportedMessage;
}


@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSArray *participantDestinationIdentifiers;


-(id)init;


@end


#endif