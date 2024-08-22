// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SBSTATUSBARTAPAPPLICATIONDESTINATION_H
#define _SBSTATUSBARTAPAPPLICATIONDESTINATION_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "SBApplication.h"

@interface _SBStatusBarTapApplicationDestination : NSObject <NSCopying>

 {
    SBApplication *_application;
}


@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *sceneIdentifier; // ivar: _sceneIdentifier


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)application;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithApplication:(id)arg0 sceneIdentifier:(id)arg1 ;


@end


#endif