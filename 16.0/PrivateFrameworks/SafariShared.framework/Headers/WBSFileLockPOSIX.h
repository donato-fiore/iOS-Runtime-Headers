// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSFILELOCKPOSIX_H
#define WBSFILELOCKPOSIX_H

@protocol WBSFileLock;

#import <Foundation/Foundation.h>


@interface WBSFileLockPOSIX : NSObject <WBSFileLock>

 {
    int _fileDescriptor;
}




-(id)initWithFileDescriptor:(int)arg0 ;
-(void)dealloc;
-(void)releaseLock;


@end


#endif