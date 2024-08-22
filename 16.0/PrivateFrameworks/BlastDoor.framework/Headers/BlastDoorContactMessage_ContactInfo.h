// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLASTDOORCONTACTMESSAGE_CONTACTINFO_H
#define BLASTDOORCONTACTMESSAGE_CONTACTINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface BlastDoorContactMessage_ContactInfo : NSObject {
    ? contactMessage_ContactInfo;
}


@property (nonatomic, readonly) NSString *contactFormatterTitle;
@property (nonatomic, readonly) NSString *contactNameSubtitle;
@property (nonatomic, readonly) NSString *contactNameTitle;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *familyName;
@property (nonatomic, readonly) NSString *givenName;
@property (nonatomic, readonly) NSString *organizationNameSubtitle;
@property (nonatomic, readonly) NSString *organizationNameTitle;


-(id)init;


@end


#endif