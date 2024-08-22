// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REMMUTABLECRMERGEABLESTRINGDOCUMENT_H
#define REMMUTABLECRMERGEABLESTRINGDOCUMENT_H

@class NSString;
@protocol REMTTHashtagHosting, REMReplicaIDHelperOwner, REMReplicaManagerProviding;

#import <Foundation/Foundation.h>

#import "TTMergeableStringVersionedDocument.h"
#import "TTMergeableAttributedString.h"
#import "REMReplicaIDHelper.h"
#import "REMReplicaIDSource.h"

@interface REMMutableCRMergeableStringDocument : NSObject <REMTTHashtagHosting, REMReplicaIDHelperOwner>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) TTMergeableStringVersionedDocument *document; // ivar: _document
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) TTMergeableAttributedString *mergeableString;
@property (retain, nonatomic) REMReplicaIDHelper *replicaIDHelper; // ivar: _replicaIDHelper
@property (retain, nonatomic) REMReplicaIDSource *replicaIDSource; // ivar: _replicaIDSource
@property (retain, nonatomic) NSObject<REMReplicaManagerProviding> *replicaManagerProvider; // ivar: _replicaManagerProvider
@property (readonly) Class superclass;


-(id)hashtagAtIndex:(NSUInteger)arg0 effectiveRange:(struct _NSRange *)arg1 ;
-(id)immutableDocument;
-(id)initWithReplicaIDSource:(id)arg0 ;
-(id)initWithReplicaIDSource:(id)arg0 immutableDocumentToEdit:(id)arg1 ;
-(id)wipeAndReplaceWithString:(id)arg0 ;
-(void)_test_insertString:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)addHashtag:(id)arg0 range:(struct _NSRange )arg1 ;
-(void)enumerateHashtagInRange:(struct _NSRange )arg0 options:(NSUInteger)arg1 usingBlock:(id)arg2 ;
-(void)removeHashtagInRange:(struct _NSRange )arg0 ;
-(void)replicaIDHelperDidAcquireReplicaUUID:(id)arg0 ;


@end


#endif