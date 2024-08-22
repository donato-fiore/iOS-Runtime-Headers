// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPGAMECENTERUTILITIES_H
#define CPGAMECENTERUTILITIES_H


#import <Foundation/Foundation.h>

#import "CPThreadSafeMutableSet.h"

@interface CPGameCenterUtilities : NSObject

@property (readonly, nonatomic) CPThreadSafeMutableSet *supportedBundleIDs; // ivar: _supportedBundleIDs


+(id)shared;
-(BOOL)supportsBundleID:(id)arg0 ;
-(id)init;
-(void)fetchGameCenterMultiplayerGameStatusForBundleID:(id)arg0 handler:(id)arg1 ;
-(void)fetchOnDeviceMultiplayerBundleIDsWithHandler:(id)arg0 ;


@end


#endif