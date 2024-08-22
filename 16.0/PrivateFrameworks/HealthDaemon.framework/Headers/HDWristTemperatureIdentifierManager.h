// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDWRISTTEMPERATUREIDENTIFIERMANAGER_H
#define HDWRISTTEMPERATUREIDENTIFIERMANAGER_H

@class NSString;
@protocol HDDataObserver;

#import <Foundation/Foundation.h>

#import "HDProfile.h"

@interface HDWristTemperatureIdentifierManager : NSObject <HDDataObserver>

 {
    HDProfile *_profile;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithProfile:(id)arg0 ;
-(void)_mapSerialNumberToLocalDeviceSource;
-(void)dealloc;
-(void)samplesAdded:(id)arg0 anchor:(id)arg1 ;


@end


#endif