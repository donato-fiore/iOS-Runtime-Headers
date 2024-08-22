// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKDSYNCMESSAGE_H
#define NTKDSYNCMESSAGE_H

@class NSUUID, NSString, CLKComplicationDescriptor, NSNumber, NSData;
@protocol SYChange, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NTKDSyncMessage : NSObject <SYChange, NSSecureCoding>

 {
    NSUUID *_uuid;
}


@property (readonly, nonatomic) NSInteger changeType;
@property (copy, nonatomic) NSString *complicationClientID; // ivar: _complicationClientID
@property (copy, nonatomic) CLKComplicationDescriptor *complicationDescriptor; // ivar: _complicationDescriptor
@property (copy, nonatomic) NSNumber *complicationFamily; // ivar: _complicationFamily
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSUUID *faceUUID; // ivar: _faceUUID
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (nonatomic) NSInteger messageType; // ivar: _messageType
@property (readonly, nonatomic) NSString *objectIdentifier;
@property (copy, nonatomic) NSData *payloadData; // ivar: _payloadData
@property (nonatomic) CGFloat progress; // ivar: _progress
@property (readonly, nonatomic) NSString *sequencer;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)colorSyncMessageWithData:(id)arg0 domain:(id)arg1 ;
+(id)messageOfType:(NSInteger)arg0 ;
+(id)messageOfType:(NSInteger)arg0 withComplicationCliendId:(id)arg1 descriptor:(id)arg2 family:(id)arg3 ;
+(id)messageOfType:(NSInteger)arg0 withComplicationClientId:(id)arg1 ;
+(id)messageOfType:(NSInteger)arg0 withFaceUUID:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif