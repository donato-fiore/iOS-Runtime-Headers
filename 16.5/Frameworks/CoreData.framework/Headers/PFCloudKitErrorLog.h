// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFCLOUDKITERRORLOG_H
#define PFCLOUDKITERRORLOG_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface PFCloudKitErrorLog : NSObject {
    NSMutableArray *_entries;
}




-(id)description;
-(id)init;
-(void)dealloc;


@end


#endif