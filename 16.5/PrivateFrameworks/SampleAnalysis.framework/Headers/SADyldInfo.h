// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SADYLDINFO_H
#define SADYLDINFO_H

@class NSUUID, NSMutableString;

#import <Foundation/Foundation.h>

#import "SATask.h"

@interface SADyldInfo : NSObject {
    BOOL _isSharedCache;
    BOOL _dyldInfoIsComplete;
    BOOL _pathIsComplete;
    SATask *_task;
    NSUUID *_uuid;
    NSUInteger _loadAddress;
    NSUInteger _stringID;
    NSMutableString *_path;
}




-(id)debugDescription;


@end


#endif