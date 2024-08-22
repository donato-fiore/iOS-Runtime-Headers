// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPLRESOURCETRANSFERTASK_H
#define CPLRESOURCETRANSFERTASK_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CPLResourceTransferTaskOptions.h"
#import "CPLResource.h"

@interface CPLResourceTransferTask : NSObject <NSSecureCoding>

 {
    CPLResourceTransferTaskOptions *_options;
}


@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled; // ivar: _cancelled
@property (nonatomic, getter=isHighPriority) BOOL highPriority;
@property (nonatomic) NSUInteger intent;
@property (copy, nonatomic) CPLResourceTransferTaskOptions *options;
@property (readonly, nonatomic) CPLResource *resource; // ivar: _resource
@property (readonly, copy, nonatomic) NSString *taskIdentifier; // ivar: _taskIdentifier


+(BOOL)isForegroundOperationForIntent:(NSUInteger)arg0 ;
+(BOOL)isHighPriorityForIntent:(NSUInteger)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)descriptionForIntent:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(Class)classForCoder;
-(Class)classForKeyedArchiver;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithResource:(id)arg0 taskIdentifier:(id)arg1 ;
-(void)cancelTask;
-(void)encodeWithCoder:(id)arg0 ;
-(void)launch;


@end


#endif