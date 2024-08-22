// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef __NSCFURLSESSIONTASKACTIVESTREAMDEPENDENCYINFO_H
#define __NSCFURLSESSIONTASKACTIVESTREAMDEPENDENCYINFO_H

@class NSNumber, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface __NSCFURLSessionTaskActiveStreamDependencyInfo : NSObject {
    NSNumber *_streamID;
    NSMutableDictionary *_mainDocumentTaskURLs;
    NSMutableDictionary *_mainDocumentTaskMimeTypes;
}




-(id)init;
-(void)dealloc;


@end


#endif