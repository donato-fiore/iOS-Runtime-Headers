// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPLRECORDVIEW_H
#define CPLRECORDVIEW_H

@class NSData;

#import <Foundation/Foundation.h>

#import "CPLPlaceholderRecord.h"
#import "CPLScopedIdentifier.h"
#import "CPLRecordChange.h"

@interface CPLRecordView : NSObject

@property (readonly, nonatomic) CPLPlaceholderRecord *placeholderRecord;
@property (readonly, nonatomic) NSData *recordChangeData;
@property (readonly, nonatomic) CPLScopedIdentifier *scopedIdentifier;
@property (readonly, nonatomic) CPLRecordChange *synthesizedRecord;


-(BOOL)supportsResources;
-(Class)recordClass;
-(id)changeForType:(NSUInteger)arg0 ;
-(id)description;
-(id)realRecordChangeFromRecordChange:(id)arg0 direction:(NSUInteger)arg1 newRecord:(*id)arg2 ;
-(id)realRecordChangeFromRecordChange:(id)arg0 direction:(NSUInteger)arg1 newRecord:(*id)arg2 changeType:(NSUInteger)arg3 diffTracker:(id)arg4 ;
-(id)realRecordChangeFromRecordChange:(id)arg0 direction:(NSUInteger)arg1 newRecord:(*id)arg2 diffTracker:(id)arg3 ;
-(id)redactedDescription;
-(id)relatedScopedIdentifier;
-(id)relation;
-(id)secondaryScopedIdentifier;


@end


#endif