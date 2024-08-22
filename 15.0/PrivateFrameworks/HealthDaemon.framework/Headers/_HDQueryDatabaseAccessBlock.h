// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HDQUERYDATABASEACCESSBLOCK_H
#define _HDQUERYDATABASEACCESSBLOCK_H

@class NSString;

#import <Foundation/Foundation.h>

#import "HDQueryServer.h"

@interface _HDQueryDatabaseAccessBlock : NSObject {
    id *_block;
    HDQueryServer *_queryServer;
    NSString *_processBundleIdentifier;
    NSInteger _qualityOfService;
    CGFloat _creationTime;
}




-(id)description;


@end


#endif