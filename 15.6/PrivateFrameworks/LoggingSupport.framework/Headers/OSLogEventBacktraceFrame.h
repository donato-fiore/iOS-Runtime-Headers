// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OSLOGEVENTBACKTRACEFRAME_H
#define OSLOGEVENTBACKTRACEFRAME_H

@class NSUUID;

#import <Foundation/Foundation.h>


@interface OSLogEventBacktraceFrame : NSObject {
    unsigned char _uuid;
    NSUUID *_imageUUID;
}


@property (readonly, nonatomic) NSUInteger imageOffset; // ivar: _imageOffset
@property (readonly, nonatomic) NSUUID *imageUUID;
@property (readonly, nonatomic) char * imageUUIDBytes;


-(id)initWithUUIDBytes:(char *)arg0 andOffset:(NSUInteger)arg1 ;
-(void)dealloc;


@end


#endif