// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRIREFERENCEMANAGEDDIRREADERLOCK_H
#define TRIREFERENCEMANAGEDDIRREADERLOCK_H

@class NSString, _PASLock;

#import <Foundation/Foundation.h>


@interface TRIReferenceManagedDirReaderLock : NSObject {
    NSString *_dir;
    _PASLock *_lock;
}




-(id)init;
-(id)initWithDir:(id)arg0 ;
-(void)dealloc;
-(void)unlock;


@end


#endif