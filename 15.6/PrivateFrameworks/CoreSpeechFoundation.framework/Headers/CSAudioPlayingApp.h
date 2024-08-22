// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSAUDIOPLAYINGAPP_H
#define CSAUDIOPLAYINGAPP_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CSAudioPlayingApp : NSObject

@property (readonly, nonatomic) NSString *appName; // ivar: _appName
@property (readonly, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (readonly, nonatomic) NSString *version; // ivar: _version


-(id)initWithPid:(int)arg0 ;


@end


#endif