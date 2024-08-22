// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICNASERVERENVIRONMENT_H
#define ICNASERVERENVIRONMENT_H

@class NSString, NSURL;

#import <Foundation/Foundation.h>


@interface ICNAServerEnvironment : NSObject

@property (retain, nonatomic) NSString *aaEndPointTypeName; // ivar: _aaEndPointTypeName
@property char serverEnvironmentType; // ivar: _serverEnvironmentType
@property (retain, nonatomic) NSURL *targetURL; // ivar: _targetURL


+(id)defaultAMSBag;
+(id)fallbackDefaultTargetURLFromPrefs;
+(id)ic_defaultBagKeySet;
-(id)fallbackDefaultTargetURL;
-(id)init;


@end


#endif