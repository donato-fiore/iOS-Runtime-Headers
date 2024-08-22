// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef __NSCFTASKFORCLASS_H
#define __NSCFTASKFORCLASS_H

@class NSUUID, NSURL, NSData, NSString;
@protocol __NSURLSessionTaskGroupForConfiguration;

#import <Foundation/Foundation.h>

#import "NSURLRequest.h"

@interface __NSCFTaskForClass : NSObject {
    Class cl;
    NSURLRequest *request;
    NSUUID *uniqueIdentifier;
    NSURL *uploadFile;
    NSData *bodyData;
    id *completion;
    NSString *downloadFilePath;
    NSData *resumeData;
    id *downloadCompletion;
    id<__NSURLSessionTaskGroupForConfiguration> *_group;
}




-(void)dealloc;


@end


#endif