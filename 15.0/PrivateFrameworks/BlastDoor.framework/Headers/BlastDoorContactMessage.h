// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BLASTDOORCONTACTMESSAGE_H
#define BLASTDOORCONTACTMESSAGE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "BlastDoorContactMessage_ContactInfo.h"

@interface BlastDoorContactMessage : NSObject {
    ? contactMessage;
}


@property (nonatomic, readonly) BlastDoorContactMessage_ContactInfo *contactInfo;
@property (nonatomic, readonly) NSString *description;


-(id)init;


@end


#endif