// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSUZIPFILEDESCRIPTORWRAPPER_H
#define TSUZIPFILEDESCRIPTORWRAPPER_H

@protocol OS_dispatch_group, TSUReadChannel;

#import <Foundation/Foundation.h>


@interface TSUZipFileDescriptorWrapper : NSObject {
    NSObject<OS_dispatch_group> *_accessGroup;
}


@property (readonly, nonatomic) int fileDescriptor; // ivar: _fileDescriptor
@property (readonly, nonatomic) NSObject<TSUReadChannel> *readChannel; // ivar: _readChannel


-(id)init;
-(id)initWithFileDescriptor:(int)arg0 queue:(id)arg1 ;
-(void)beginAccess;
-(void)dealloc;
-(void)endAccess;
-(void)waitForAccessToEnd;


@end


#endif