// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INHELPERSERVICEACCESSSPECIFIER_H
#define INHELPERSERVICEACCESSSPECIFIER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface INHelperServiceAccessSpecifier : NSObject

@property (readonly, nonatomic) NSUInteger accessLevel; // ivar: _accessLevel
@property (readonly, copy, nonatomic) NSString *associatedAppBundleIdentifier; // ivar: _associatedAppBundleIdentifier


+(id)accessSpecifierAppropriateForCurrentProcess;
+(id)accessSpecifierAppropriateForXPCConnection:(id)arg0 ;
+(id)accessSpecifierFilteredForAssociatedAppBundleIdentifier:(id)arg0 ;
+(id)accessSpecifierUnrestricted;
+(id)accessSpecifierWithNoAccess;
+(void)initialize;
-(id)debugDescription;
-(id)initWithAccessLevel:(NSUInteger)arg0 associatedAppBundleIdentifier:(id)arg1 ;


@end


#endif