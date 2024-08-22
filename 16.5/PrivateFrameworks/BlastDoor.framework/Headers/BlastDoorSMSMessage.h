// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLASTDOORSMSMESSAGE_H
#define BLASTDOORSMSMESSAGE_H

@class NSString, NSDate, NSArray;

#import <Foundation/Foundation.h>


@interface BlastDoorSMSMessage : NSObject {
    ? sMSMessage;
}


@property (nonatomic, readonly) NSString *GUID;
@property (nonatomic, readonly) NSString *contentType;
@property (nonatomic, readonly) NSString *countryCode;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BOOL has_iMessageCapability;
@property (nonatomic, readonly) BOOL has_replaceMessage;
@property (nonatomic, readonly) BOOL has_sendEnabled;
@property (nonatomic, readonly) BOOL has_spamCategory;
@property (nonatomic, readonly) BOOL has_trackMessage;
@property (nonatomic, readonly) NSInteger iMessageCapability;
@property (nonatomic, readonly) NSArray *items;
@property (nonatomic, readonly) NSString *originatedDeviceEmail;
@property (nonatomic, readonly) NSString *originatedDeviceNumber;
@property (nonatomic, readonly) NSString *originatedDeviceSIM;
@property (nonatomic, readonly) NSArray *recipients;
@property (nonatomic, readonly) NSInteger replaceMessage;
@property (nonatomic, readonly) BOOL sendEnabled;
@property (nonatomic, readonly) NSString *sender;
@property (nonatomic, readonly) NSString *serviceCenter;
@property (nonatomic, readonly) NSInteger spamCategory;
@property (nonatomic, readonly) NSString *subject;
@property (nonatomic, readonly) BOOL trackMessage;
@property (nonatomic, readonly) NSInteger type;
@property (nonatomic, readonly) NSString *version;


-(id)init;


@end


#endif