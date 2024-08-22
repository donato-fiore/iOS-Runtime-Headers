// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BUZIPFILEDESCRIPTORWRAPPER_H
#define BUZIPFILEDESCRIPTORWRAPPER_H

@protocol OS_dispatch_group, BUReadChannel;

#import <Foundation/Foundation.h>


@interface BUZipFileDescriptorWrapper : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_group> *accessGroup; // ivar: _accessGroup
@property (readonly, nonatomic) int fileDescriptor; // ivar: _fileDescriptor
@property (readonly, nonatomic) NSObject<BUReadChannel> *readChannel; // ivar: _readChannel


-(id)init;
-(id)initWithFileDescriptor:(int)arg0 queue:(id)arg1 ;
-(void)beginAccess;
-(void)dealloc;
-(void)endAccess;
-(void)waitForAccessToEnd;


@end


#endif