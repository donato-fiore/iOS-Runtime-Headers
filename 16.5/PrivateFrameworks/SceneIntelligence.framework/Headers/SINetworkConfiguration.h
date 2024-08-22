// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SINETWORKCONFIGURATION_H
#define SINETWORKCONFIGURATION_H

@class NSMutableSet, NSString;

#import <Foundation/Foundation.h>


@interface SINetworkConfiguration : NSObject

@property (retain) NSMutableSet *disabledOutputBlobs; // ivar: _disabledOutputBlobs
@property NSInteger engineType; // ivar: _engineType
@property (retain) NSString *loggerPrefix; // ivar: _loggerPrefix
@property (readonly) NSString *networkMode; // ivar: _networkMode
@property (readonly) NSString *networkName; // ivar: _networkName
@property (retain) NSString *networkPath; // ivar: _networkPath
@property BOOL runByE5RT; // ivar: _runByE5RT
@property BOOL supportZeroCopy; // ivar: _supportZeroCopy


+(id)algorithmClass;
-(id)init;


@end


#endif