// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGPIPELINEENRICHMENT_H
#define SGPIPELINEENRICHMENT_H

@class NSData;


#import "SGEntity.h"

@interface SGPipelineEnrichment : SGEntity

@property (retain, nonatomic) NSData *contentHash; // ivar: _contentHash
@property (nonatomic) BOOL pendingGeocode; // ivar: _pendingGeocode


+(id)address:(id)arg0 forIdentity:(id)arg1 parent:(id)arg2 curated:(BOOL)arg3 context:(id)arg4 contextRangeOfInterest:(struct _NSRange )arg5 extractionInfo:(id)arg6 ;
+(id)birthday:(id)arg0 forIdentity:(id)arg1 parent:(id)arg2 curated:(BOOL)arg3 context:(id)arg4 contextRangeOfInterest:(struct _NSRange )arg5 extractionInfo:(id)arg6 ;
+(id)emailAddress:(id)arg0 forIdentity:(id)arg1 parent:(id)arg2 curated:(BOOL)arg3 context:(id)arg4 contextRangeOfInterest:(struct _NSRange )arg5 extractionInfo:(id)arg6 ;
+(id)instantMessageAddress:(id)arg0 forIdentity:(id)arg1 parent:(id)arg2 curated:(BOOL)arg3 context:(id)arg4 contextRangeOfInterest:(struct _NSRange )arg5 extractionInfo:(id)arg6 ;
+(id)phoneNumber:(id)arg0 forIdentity:(id)arg1 parent:(id)arg2 curated:(BOOL)arg3 context:(id)arg4 contextRangeOfInterest:(struct _NSRange )arg5 extractionInfo:(id)arg6 ;
+(id)socialProfile:(id)arg0 forIdentity:(id)arg1 parent:(id)arg2 curated:(BOOL)arg3 context:(id)arg4 contextRangeOfInterest:(struct _NSRange )arg5 extractionInfo:(id)arg6 ;
-(BOOL)isEvent;
-(BOOL)isPerson;
-(id)initWithContactDetailWithKey:(id)arg0 type:(NSUInteger)arg1 extractionInfo:(id)arg2 curated:(BOOL)arg3 parent:(id)arg4 value:(id)arg5 context:(id)arg6 contextRangeOfInterest:(struct _NSRange )arg7 ;
-(id)initWithDuplicateKey:(id)arg0 title:(id)arg1 parent:(id)arg2 ;
-(id)initWithIntentPersonAtDate:(id)arg0 bundleId:(id)arg1 handle:(id)arg2 displayName:(id)arg3 ;
-(id)initWithPseudoContactWithKey:(id)arg0 parent:(id)arg1 name:(id)arg2 ;
-(id)loggingIdentifier;
-(id)toCloudKitRecordWithId:(id)arg0 parentEntityType:(NSInteger)arg1 ;
-(void)setCreationTimestamp:(struct SGUnixTimestamp_ )arg0 ;
-(void)setLastModifiedTimestamp:(struct SGUnixTimestamp_ )arg0 ;


@end


#endif