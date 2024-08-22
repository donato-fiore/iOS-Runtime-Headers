// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INCWIDGETOPTIONS_H
#define INCWIDGETOPTIONS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface INCWidgetOptions : NSObject

@property (copy, nonatomic) NSString *extensionBundleIdentifier; // ivar: _extensionBundleIdentifier
@property (copy, nonatomic) NSString *intentType; // ivar: _intentType


-(id)initWithExtensionBundleIdentifier:(id)arg0 intentType:(id)arg1 ;


@end


#endif