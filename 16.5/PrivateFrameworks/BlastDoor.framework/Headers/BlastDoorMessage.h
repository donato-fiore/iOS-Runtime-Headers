// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLASTDOORMESSAGE_H
#define BLASTDOORMESSAGE_H

@class NSArray, NSAttributedString, NSString;

#import <Foundation/Foundation.h>


@interface BlastDoorMessage : NSObject {
    ? message;
}


@property (nonatomic, readonly) NSArray *attributionInfo;
@property (nonatomic, readonly) NSAttributedString *content;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSArray *participantDestinationIdentifiers;
@property (nonatomic, readonly) NSString *plainTextBody;
@property (nonatomic, readonly) NSString *plainTextSubject;


-(id)init;


@end


#endif