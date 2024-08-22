// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDDEMODATA_H
#define HDDEMODATA_H

@class NSString, NSFileManager;

#import <Foundation/Foundation.h>


@interface HDDemoData : NSObject {
    NSString *_demoDataPath;
    NSFileManager *_fileManager;
}




+(id)demoDataDirectory;


@end


#endif