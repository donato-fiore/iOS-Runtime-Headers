// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASABOX_H
#define ASABOX_H

@class NSArray, NSString;


#import "ASAObject.h"

@interface ASABox : ASAObject

@property (readonly, nonatomic, getter=isAcquireSettable) BOOL acquireSettable;
@property (nonatomic, getter=isAcquired) BOOL acquired;
@property (readonly, nonatomic) int acquisitionFailure;
@property (readonly, copy, nonatomic) NSArray *audioDeviceObjectIDs;
@property (readonly, copy, nonatomic) NSArray *audioDevices;
@property (readonly, copy, nonatomic) NSString *boxUID;
@property (readonly, copy, nonatomic) NSArray *clockDeviceObjectIDs;
@property (readonly, copy, nonatomic) NSArray *clockDevices;
@property (readonly, copy, nonatomic) NSArray *deviceObjectIDs;
@property (readonly, copy, nonatomic) NSString *firmwareVersion;
@property (readonly, nonatomic) BOOL hasAudio;
@property (readonly, nonatomic) BOOL hasMIDI;
@property (readonly, nonatomic) BOOL hasVideo;
@property (nonatomic) BOOL identify;
@property (readonly, nonatomic, getter=isIdentifySettable) BOOL identifySettable;
@property (readonly, nonatomic) BOOL isProtected;
@property (readonly, copy, nonatomic) NSString *manufacturer;
@property (readonly, copy, nonatomic) NSString *modelName;
@property (readonly, copy, nonatomic) NSString *modelUID;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic, getter=isNameSettable) BOOL nameSettable;
@property (readonly, copy, nonatomic) NSString *serialNumber;
@property (readonly, nonatomic) unsigned int transportType;


-(id)coreAudioClassName;
-(id)diagnosticDescriptionWithIndent:(id)arg0 walkTree:(BOOL)arg1 ;


@end


#endif