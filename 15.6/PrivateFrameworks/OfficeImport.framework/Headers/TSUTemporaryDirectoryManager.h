// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSUTEMPORARYDIRECTORYMANAGER_H
#define TSUTEMPORARYDIRECTORYMANAGER_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface TSUTemporaryDirectoryManager : NSObject {
    NSURL *_baseDirectoryURL;
}




+(Class)managedTemporaryDirectoryClass;
+(id)baseDirectoryURL;
+(id)makeUniqueDirectoryWithBaseDirectory:(id)arg0 filename:(id)arg1 ;
+(id)sharedManager;
-(id)_readDirectories;
-(id)init;
-(id)newDirectoryWithFilename:(id)arg0 ;
-(void)_clearDirectories:(id)arg0 ;


@end


#endif