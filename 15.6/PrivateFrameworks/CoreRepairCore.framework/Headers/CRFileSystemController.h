// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRFILESYSTEMCONTROLLER_H
#define CRFILESYSTEMCONTROLLER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CRFileSystemController : NSObject {
    NSString *tmpFDRDataPathStr;
    NSString *fdrDataPathStr;
}




+(id)sharedSingleton;
-(BOOL)_mountBindFSFrom:(char *)arg0 To:(char *)arg1 withFlag:(int)arg2 ;
-(NSInteger)commitToFileSystem;
-(id)_init;
-(id)init;
-(id)setupFileSystemForRepair;


@end


#endif