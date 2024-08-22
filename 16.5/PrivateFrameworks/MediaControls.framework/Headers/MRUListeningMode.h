// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRULISTENINGMODE_H
#define MRULISTENINGMODE_H

@class NSSet, NSString, MPAVOutputDeviceRoute;

#import <Foundation/Foundation.h>


@interface MRUListeningMode : NSObject

@property (readonly, nonatomic) NSSet *availableListeningModes; // ivar: _availableListeningModes
@property (readonly, nonatomic) NSString *currentListeningMode; // ivar: _currentListeningMode
@property (readonly, nonatomic) MPAVOutputDeviceRoute *outputDeviceRoute; // ivar: _outputDeviceRoute


-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithOutputDeviceRoute:(id)arg0 ;


@end


#endif