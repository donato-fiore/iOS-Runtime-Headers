// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRVIRTUALVOICEINPUTDEVICE_H
#define MRVIRTUALVOICEINPUTDEVICE_H

@class NSData;

#import <Foundation/Foundation.h>

#import "MRVirtualVoiceInputDeviceDescriptor.h"

@interface MRVirtualVoiceInputDevice : NSObject

@property (readonly, nonatomic) NSData *data;
@property (copy, nonatomic) MRVirtualVoiceInputDeviceDescriptor *descriptor; // ivar: _descriptor
@property (readonly, nonatomic) unsigned int deviceID; // ivar: _deviceID
@property (nonatomic) unsigned int recordingState; // ivar: _recordingState


-(id)description;
-(id)initWithData:(id)arg0 ;
-(id)initWithDeviceID:(unsigned int)arg0 ;


@end


#endif