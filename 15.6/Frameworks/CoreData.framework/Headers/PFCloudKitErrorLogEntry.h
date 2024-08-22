// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PFCLOUDKITERRORLOGENTRY_H
#define PFCLOUDKITERRORLOGENTRY_H

@class NSError, NSString;

#import <Foundation/Foundation.h>


@interface PFCloudKitErrorLogEntry : NSObject {
    NSError *_error;
    NSString *_annotation;
}




-(id)initWithError:(id)arg0 annotation:(id)arg1 ;
-(void)dealloc;


@end


#endif