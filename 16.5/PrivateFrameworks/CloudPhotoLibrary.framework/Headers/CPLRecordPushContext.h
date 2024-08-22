// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPLRECORDPUSHCONTEXT_H
#define CPLRECORDPUSHCONTEXT_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CPLRecordPushContext : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSInteger flags; // ivar: _flags
@property (readonly, nonatomic) NSUInteger priority; // ivar: _priority
@property (readonly, nonatomic) NSString *uploadIdentifier; // ivar: _uploadIdentifier


+(BOOL)supportsSecureCoding;
+(NSInteger)mergingFlags:(NSInteger)arg0 previousFlags:(NSInteger)arg1 changeType:(NSUInteger)arg2 ;
+(NSUInteger)minimumPriorityForLocalConflictResolution;
+(id)newEmptyPushContext;
+(id)newPushContextForChange:(id)arg0 overStoredRecord:(id)arg1 initialUpload:(BOOL)arg2 ;
+(id)pushContextsFromStoredUploadIdentifiers:(id)arg0 ;
+(id)pushContextsFromStoredUploadIdentifiersInCoder:(id)arg0 key:(id)arg1 ;
+(void)setMinimumPriorityForLocalConflictResolution:(NSUInteger)arg0 ;
-(id)copyContextWithUploadIdentifier:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUploadIdentifier:(id)arg0 flags:(NSInteger)arg1 priority:(NSUInteger)arg2 ;
-(id)pushContextAddingUploadIdentifier;
-(id)pushContextMergingFlags:(NSInteger)arg0 changeType:(NSUInteger)arg1 uploadIdentifier:(id)arg2 priority:(NSUInteger)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif