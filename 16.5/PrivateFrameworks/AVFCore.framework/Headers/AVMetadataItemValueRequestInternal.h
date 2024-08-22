// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVMETADATAITEMVALUEREQUESTINTERNAL_H
#define AVMETADATAITEMVALUEREQUESTINTERNAL_H

@class NSString, NSError;
@protocol NSObject><NSCopying;

#import <Foundation/Foundation.h>

#import "AVWeakReference.h"

@interface AVMetadataItemValueRequestInternal : NSObject {
    AVWeakReference *weakReferenceToMetadataItem;
    id<NSObject><NSCopying> *value;
    NSString *dataType;
    NSError *error;
}






@end


#endif