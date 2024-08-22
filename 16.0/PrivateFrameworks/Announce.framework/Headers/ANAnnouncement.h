// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ANANNOUNCEMENT_H
#define ANANNOUNCEMENT_H

@class NSDate, NSArray, NSString, NSData, NSDictionary;
@protocol ANCompanionMessage, ANDataMessage, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ANParticipant.h"
#import "ANLocation.h"
#import "ANSender.h"

@interface ANAnnouncement : NSObject <ANCompanionMessage, ANDataMessage, NSSecureCoding>



@property (nonatomic) NSUInteger action; // ivar: _action
@property (retain, nonatomic) ANParticipant *announcer; // ivar: _announcer
@property (nonatomic) ? cmStartTime; // ivar: _cmStartTime
@property (retain, nonatomic) NSDate *creationTimestamp; // ivar: _creationTimestamp
@property (retain, nonatomic) NSArray *dataItems; // ivar: _dataItems
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int deviceClass; // ivar: _deviceClass
@property (readonly, nonatomic) NSData *fileData;
@property (retain, nonatomic) NSString *filePath; // ivar: _filePath
@property (readonly, nonatomic) NSString *groupID; // ivar: _groupID
@property (readonly, nonatomic) BOOL hasPlayed;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isRelayRequest;
@property (readonly, nonatomic) BOOL isRelayType;
@property (readonly, nonatomic) BOOL isRelayed;
@property (retain, nonatomic) NSArray *listeners; // ivar: _listeners
@property (retain, nonatomic) ANLocation *location; // ivar: _location
@property (nonatomic) NSUInteger machStartTime; // ivar: _machStartTime
@property (retain, nonatomic) NSString *messageVersion; // ivar: _messageVersion
@property (readonly, nonatomic) NSDictionary *metadata;
@property (retain, nonatomic) NSDate *playbackDeadline; // ivar: _playbackDeadline
@property (nonatomic) int productType; // ivar: _productType
@property (nonatomic) NSUInteger productTypeOverride; // ivar: _productTypeOverride
@property (readonly, nonatomic) NSDate *receiptTimestamp; // ivar: _receiptTimestamp
@property (retain, nonatomic) ANSender *sender; // ivar: _sender
@property (nonatomic) NSUInteger source; // ivar: _source
@property (nonatomic) NSUInteger statusFlags; // ivar: _statusFlags
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *transcriptionText; // ivar: _transcriptionText


+(BOOL)supportsSecureCoding;
+(NSUInteger)sourceFromString:(id)arg0 ;
+(id)messageDataFromMessage:(id)arg0 ;
+(id)messageFromData:(id)arg0 data:(id)arg1 ;
+(id)messageWithoutDataFromMessage:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)updateWithContentsOfAnnouncement:(id)arg0 ;
-(id)_generateGroupID;
-(id)_stringForAction:(NSUInteger)arg0 ;
-(id)_stringForDataType:(NSUInteger)arg0 ;
-(id)_uuidFromUUIDs:(id)arg0 ;
-(id)copy;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMessage:(id)arg0 ;
-(id)message;
-(id)messageForCompanion;
-(void)encodeWithCoder:(id)arg0 ;
-(void)processAudioTranscription:(id)arg0 ;
-(void)removeAudioFileDataItems;


@end


#endif