// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLASTDOORBASICMESSAGE_H
#define BLASTDOORBASICMESSAGE_H

@class NSAttributedString, NSString, NSArray;

#import <Foundation/Foundation.h>


@interface BlastDoorBasicMessage : NSObject {
    ? basicMessage;
}


@property (nonatomic, readonly) NSAttributedString *content;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSArray *participantDestinationIdentifiers;
@property (nonatomic, readonly) NSString *plainTextBody;
@property (nonatomic, readonly) NSString *plainTextSubject;


-(id)init;


@end


#endif