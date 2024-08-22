// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBMIRROREDDISPLAYCONTROLLERPROVIDER_H
#define SBMIRROREDDISPLAYCONTROLLERPROVIDER_H

@class SBExternalDisplayDefaults, NSString;
@protocol SBDisplayControllerProviding;

#import <Foundation/Foundation.h>


@interface SBMirroredDisplayControllerProvider : NSObject <SBDisplayControllerProviding>

 {
    SBExternalDisplayDefaults *_externalDisplayDefaults;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)displayControllerInfoForConnectingDisplay:(id)arg0 configuration:(id)arg1 ;
-(id)initWithExternalDisplayDefaults:(id)arg0 ;


@end


#endif