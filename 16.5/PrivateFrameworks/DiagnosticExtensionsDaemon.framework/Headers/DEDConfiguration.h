// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DEDCONFIGURATION_H
#define DEDCONFIGURATION_H

@class NSXPCListener;

#import <Foundation/Foundation.h>


@interface DEDConfiguration : NSObject

@property (retain) NSXPCListener *anonymousListener; // ivar: _anonymousListener


+(id)sharedInstance;
-(NSUInteger)connectionType;
-(char *)loggingSubsystem;
-(id)classClusterAPIVersion;
-(id)dedDirectory;
-(id)errorDomain;
-(id)identifier;
-(id)machServiceName;
-(id)sharedAnonymousListener;
-(void)invalidateTestListeners;


@end


#endif