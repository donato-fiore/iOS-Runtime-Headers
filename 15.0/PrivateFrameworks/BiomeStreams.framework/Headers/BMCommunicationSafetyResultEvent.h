// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMCOMMUNICATIONSAFETYRESULTEVENT_H
#define BMCOMMUNICATIONSAFETYRESULTEVENT_H

@class NSString, NSArray, NSURL, NSData;
@protocol BMStoreData, NSSecureCoding, BMProtoBufWrapper, BMStreamValidating;

#import <Foundation/Foundation.h>


@interface BMCommunicationSafetyResultEvent : NSObject <BMStoreData, NSSecureCoding, BMProtoBufWrapper, BMStreamValidating>



@property (readonly, nonatomic) CGFloat absoluteTimestamp; // ivar: _absoluteTimestamp
@property (readonly, copy, nonatomic) NSString *childID; // ivar: _childID
@property (readonly, copy, nonatomic) NSArray *contactHandles; // ivar: _contactHandles
@property (nonatomic) unsigned int contentCount; // ivar: _contentCount
@property (readonly, copy, nonatomic) NSString *contentID; // ivar: _contentID
@property (nonatomic) NSUInteger contentType; // ivar: _contentType
@property (readonly, copy, nonatomic) NSURL *contentURL; // ivar: _contentURL
@property (readonly, copy, nonatomic) NSString *conversationID; // ivar: _conversationID
@property (readonly, copy, nonatomic) NSURL *conversationURL; // ivar: _conversationURL
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *deviceID; // ivar: _deviceID
@property (nonatomic) NSUInteger eventDirection; // ivar: _eventDirection
@property (nonatomic) NSUInteger eventType; // ivar: _eventType
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSData *imageData; // ivar: _imageData
@property (readonly, copy, nonatomic) NSString *senderHandle; // ivar: _senderHandle
@property (readonly, copy, nonatomic) NSString *sourceBundleID; // ivar: _sourceBundleID
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(BOOL)isCompleteWithContext:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isValidWithContext:(id)arg0 error:(*id)arg1 ;
-(id)encodeAsProto;
-(id)initWithChildID:(id)arg0 deviceID:(id)arg1 sourceBundleID:(id)arg2 absoluteTimeStamp:(CGFloat)arg3 eventDirection:(NSUInteger)arg4 eventType:(NSUInteger)arg5 contentType:(NSUInteger)arg6 contactHandles:(id)arg7 contentID:(id)arg8 conversationID:(id)arg9 imageData:(id)arg10 ;
-(id)initWithChildID:(id)arg0 deviceID:(id)arg1 sourceBundleID:(id)arg2 absoluteTimeStamp:(CGFloat)arg3 eventDirection:(NSUInteger)arg4 eventType:(NSUInteger)arg5 contentType:(NSUInteger)arg6 contactHandles:(id)arg7 contentID:(id)arg8 conversationID:(id)arg9 imageData:(id)arg10 senderHandle:(id)arg11 contentURL:(id)arg12 conversationURL:(id)arg13 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)json;
-(id)jsonDict;
-(id)proto;
-(id)serialize;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif