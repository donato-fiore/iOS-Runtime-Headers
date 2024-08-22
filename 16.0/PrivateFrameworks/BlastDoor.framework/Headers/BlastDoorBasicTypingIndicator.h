// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLASTDOORBASICTYPINGINDICATOR_H
#define BLASTDOORBASICTYPINGINDICATOR_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface BlastDoorBasicTypingIndicator : NSObject {
    ? basicTypingIndicator;
}


@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BOOL isFinished;
@property (nonatomic, readonly) NSArray *participantDestinationIdentifiers;


-(id)init;


@end


#endif