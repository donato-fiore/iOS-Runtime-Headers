// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _EXHOSTVIEWCONTROLLERCONFIGURATION_H
#define _EXHOSTVIEWCONTROLLERCONFIGURATION_H

@class NSString;
@protocol NSCopying, _EXExtensionRepresenting;

#import <Foundation/Foundation.h>


@interface _EXHostViewControllerConfiguration : NSObject <NSCopying>



@property (retain, nonatomic) NSObject<_EXExtensionRepresenting> *extension; // ivar: _extension
@property (retain, nonatomic) NSString *sceneIdentifier; // ivar: _sceneIdentifier


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif