// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSFILEPROVIDERENUMERATIONPROPERTIES_H
#define NSFILEPROVIDERENUMERATIONPROPERTIES_H

@class NSString, NSArray, NSDictionary;


#import "FPEnumerationSettings.h"

@interface NSFileProviderEnumerationProperties : FPEnumerationSettings

@property (copy) NSString *enumeratedItemIdentifier; // ivar: _enumeratedItemIdentifier
@property (copy) NSString *enumeratingApplicationBundleIdentifier; // ivar: _enumeratingApplicationBundleIdentifier
@property (copy) NSArray *fileTypes; // ivar: _fileTypes
@property (copy, nonatomic) NSDictionary *userInfo; // ivar: _userInfo




@end


#endif