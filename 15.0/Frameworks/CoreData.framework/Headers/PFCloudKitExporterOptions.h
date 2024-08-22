// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFCLOUDKITEXPORTEROPTIONS_H
#define PFCLOUDKITEXPORTEROPTIONS_H

@class CKDatabase;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "NSCloudKitMirroringDelegateOptions.h"

@interface PFCloudKitExporterOptions : NSObject <NSCopying>

 {
    CKDatabase *_database;
    NSCloudKitMirroringDelegateOptions *_mirroringDelegateOptions;
    NSUInteger _perOperationBytesThreshold;
    NSUInteger _perOperationObjectThreshold;
}




-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithDatabase:(id)arg0 options:(id)arg1 ;
-(void)dealloc;


@end


#endif