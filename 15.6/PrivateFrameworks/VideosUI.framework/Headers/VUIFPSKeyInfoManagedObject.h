// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIFPSKEYINFOMANAGEDOBJECT_H
#define VUIFPSKEYINFOMANAGEDOBJECT_H

@class NSManagedObject, NSString, NSDate, NSData, NSURL, NSNumber;


#import "VUIVideoManagedObject.h"

@interface VUIFPSKeyInfoManagedObject : NSManagedObject

@property (nonatomic) BOOL allowsManualRenewal;
@property (copy, nonatomic) NSString *contentID;
@property (copy, nonatomic) NSDate *expirationDate;
@property (nonatomic) BOOL isInvalid;
@property (nonatomic) BOOL isLowValue;
@property (retain, nonatomic) NSData *keyData;
@property (copy, nonatomic) NSURL *keyURI;
@property (copy, nonatomic) NSNumber *playbackDuration;
@property (copy, nonatomic) NSDate *playbackExpirationStartDate;
@property (copy, nonatomic) NSDate *renewalDate;
@property (copy, nonatomic) NSNumber *renewalInterval;
@property (copy, nonatomic) NSDate *retrievalDate;
@property (retain, nonatomic) VUIVideoManagedObject *video;


+(id)fetchRequest;
-(void)populateFromKeyRequest:(id)arg0 video:(id)arg1 ;


@end


#endif