// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _EXEXTENSION_H
#define _EXEXTENSION_H

@class NSString;
@protocol _EXExtensionConfigurationProviding;

#import <Foundation/Foundation.h>

#import "_EXExtensionRep.h"

@interface _EXExtension : NSObject

@property (readonly) NSString *bundleIdentifier;
@property (readonly) NSObject<_EXExtensionConfigurationProviding> *configuration;
@property (readonly) _EXExtensionRep *internalRep; // ivar: _internalRep


-(id)initWithApplicationExtensionRecord:(id)arg0 ;


@end


#endif