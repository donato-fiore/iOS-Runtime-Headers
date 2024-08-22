// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMCONTAINERSCHEMACONTEXT_H
#define MCMCONTAINERSCHEMACONTEXT_H

@class NSURL, NSString;

#import <Foundation/Foundation.h>

#import "MCMContainerPath.h"
#import "MCMLibraryRepairForUser.h"
#import "MCMPOSIXUser.h"

@interface MCMContainerSchemaContext : NSObject

@property (readonly, nonatomic) NSUInteger containerClass; // ivar: _containerClass
@property (readonly, nonatomic) MCMContainerPath *containerPath; // ivar: _containerPath
@property (readonly, nonatomic) int dataProtectionClass; // ivar: _dataProtectionClass
@property (readonly, nonatomic) NSURL *homeDirectoryURL; // ivar: _homeDirectoryURL
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) MCMLibraryRepairForUser *libraryRepair; // ivar: _libraryRepair
@property (readonly, nonatomic) unsigned short posixMode; // ivar: _posixMode
@property (readonly, nonatomic) MCMPOSIXUser *posixOwner; // ivar: _posixOwner


+(id)contextWithHomeDirectoryURL:(id)arg0 containerPath:(id)arg1 POSIXMode:(unsigned short)arg2 POSIXOwner:(id)arg3 containerClass:(NSUInteger)arg4 dataProtectionClass:(int)arg5 libraryRepair:(id)arg6 identifier:(id)arg7 ;
-(id)initWithHomeDirectoryURL:(id)arg0 containerPath:(id)arg1 POSIXMode:(unsigned short)arg2 POSIXOwner:(id)arg3 containerClass:(NSUInteger)arg4 dataProtectionClass:(int)arg5 libraryRepair:(id)arg6 identifier:(id)arg7 ;


@end


#endif