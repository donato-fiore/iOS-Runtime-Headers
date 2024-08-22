// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AHTBOOTLOADER_H
#define AHTBOOTLOADER_H

@class NSString;

#import <Foundation/Foundation.h>

#import "AHTDevice.h"
#import "AHTInterface.h"

@interface AHTBootLoader : NSObject

@property (nonatomic) unsigned int connect; // ivar: _connect
@property (readonly, nonatomic) AHTDevice *device; // ivar: _device
@property (readonly, nonatomic) unsigned int imageTag; // ivar: _imageTag
@property (readonly, nonatomic) AHTInterface *interface; // ivar: _interface
@property (nonatomic) unsigned int machPort; // ivar: _machPort
@property (readonly, nonatomic) BOOL needsRestoreUpdate; // ivar: _needsRestoreUpdate
@property (readonly, nonatomic) NSString *personality; // ivar: _personality
@property (nonatomic) unsigned int service; // ivar: _service
@property (readonly, nonatomic) BOOL supportsMemoryDump; // ivar: _supportsMemoryDump
@property (readonly, nonatomic) NSString *type; // ivar: _type


+(NSUInteger)frameworkToDriverOptions:(NSUInteger)arg0 ;
+(id)withDevice:(id)arg0 service:(unsigned int)arg1 ;
+(id)withParent:(id)arg0 service:(unsigned int)arg1 ;
+(id)withService:(unsigned int)arg0 ;
-(BOOL)clearMemoryDumps:(*id)arg0 ;
-(BOOL)createMachPort:(*id)arg0 ;
-(BOOL)getMemoryDumpLevel:(*unsigned int)arg0 error:(*id)arg1 ;
-(BOOL)getMemoryDumps:(*id)arg0 error:(*id)arg1 ;
-(BOOL)getProperty:(id)arg0 property:(*id)arg1 options:(NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)isOpen;
-(BOOL)open:(*id)arg0 ;
-(BOOL)overridePersonality:(id)arg0 error:(*id)arg1 ;
-(BOOL)overrideProperties:(id)arg0 error:(*id)arg1 ;
-(BOOL)reloadProperties:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)setMemoryDumpLevel:(unsigned int)arg0 error:(*id)arg1 ;
-(BOOL)updateProperty:(id)arg0 property:(id)arg1 options:(NSUInteger)arg2 error:(*id)arg3 ;
-(id)description;
// -(id)dispatchSourceForNotification:(id)arg0 action:(id)arg1 error:(unk)arg2  ;
-(id)initWithParent:(id)arg0 service:(unsigned int)arg1 ;
-(id)initWithService:(unsigned int)arg0 ;
-(void)close;
-(void)dealloc;
-(void)destroyMachPort;


@end


#endif