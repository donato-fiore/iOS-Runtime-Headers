// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKUICONFERENCEROOM_H
#define EKUICONFERENCEROOM_H

@class EKDirectoryLocation;

#import <Foundation/Foundation.h>


@interface EKUIConferenceRoom : NSObject

@property (nonatomic) NSInteger availability; // ivar: _availability
@property (nonatomic) BOOL availabilityRequestInProgress; // ivar: _availabilityRequestInProgress
@property (retain, nonatomic) EKDirectoryLocation *location; // ivar: _location
@property (nonatomic) BOOL supportsAvailability; // ivar: _supportsAvailability


-(id)init;


@end


#endif