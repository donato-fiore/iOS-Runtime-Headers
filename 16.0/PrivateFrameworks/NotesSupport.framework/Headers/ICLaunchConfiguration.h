// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICLAUNCHCONFIGURATION_H
#define ICLAUNCHCONFIGURATION_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface ICLaunchConfiguration : NSObject

@property (copy, nonatomic) NSString *cloudAccountArchiveName; // ivar: _cloudAccountArchiveName
@property (copy, nonatomic) NSString *container; // ivar: _container
@property (nonatomic) NSUInteger environment; // ivar: _environment
@property (readonly, nonatomic) NSArray *launchArguments;
@property (copy, nonatomic) NSString *localAccountArchiveName; // ivar: _localAccountArchiveName
@property (nonatomic) BOOL resetsCloud; // ivar: _resetsCloud
@property (nonatomic) BOOL resetsContainer; // ivar: _resetsContainer
@property (nonatomic) BOOL resetsState; // ivar: _resetsState


+(id)currentConfiguration;
+(id)nonDefaultValueForValue:(id)arg0 ;
+(id)userInterfaceTesting;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithEnvironment:(NSUInteger)arg0 container:(id)arg1 resetsContainer:(BOOL)arg2 resetsCloud:(BOOL)arg3 resetsState:(BOOL)arg4 localAccountArchive:(id)arg5 cloudAccountArchive:(id)arg6 ;


@end


#endif