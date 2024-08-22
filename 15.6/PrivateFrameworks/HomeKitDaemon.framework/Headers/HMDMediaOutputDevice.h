// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDMEDIAOUTPUTDEVICE_H
#define HMDMEDIAOUTPUTDEVICE_H

@class HMFObject, AVOutputDevice, NSString;



@interface HMDMediaOutputDevice : HMFObject

@property (readonly) AVOutputDevice *av_OutputDevice;
@property (readonly, nonatomic) unsigned int deviceSubtype;
@property (readonly, nonatomic) NSString *modelID;
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) *void outputDevice; // ivar: _outputDevice
@property (readonly, nonatomic) BOOL supportsHAP;
@property (readonly, nonatomic) BOOL supportsWHA;
@property (readonly, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)shouldCreateAppleMediaAccessory;
-(NSUInteger)hash;
-(id)description;
-(id)initWithOutputDevice:(*void)arg0 ;
-(void)dealloc;


@end


#endif