// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DSLISTENERDEVICE_H
#define DSLISTENERDEVICE_H



#import "DSRapportDevice.h"
#import "DSClientMotionDataOptions.h"

@interface DSListenerDevice : DSRapportDevice

@property (retain, nonatomic) DSClientMotionDataOptions *inOptions; // ivar: _inOptions
@property (copy, nonatomic) id *responseHandler; // ivar: _responseHandler
@property (nonatomic) unsigned int version; // ivar: _version


-(id)initWithRapportDevice:(id)arg0 queue:(id)arg1 ;


@end


#endif