// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _OSLOGDIRECTORYREFERENCE_H
#define _OSLOGDIRECTORYREFERENCE_H


#import <Foundation/Foundation.h>


@interface _OSLogDirectoryReference : NSObject {
    int _fd;
    NSInteger _etk;
}


@property (readonly, nonatomic) int fileDescriptor;


-(id)initWithDescriptor:(int)arg0 ;
-(id)initWithDescriptor:(int)arg0 sandboxExtensionToken:(char *)arg1 ;
-(void)close;
-(void)dealloc;


@end


#endif