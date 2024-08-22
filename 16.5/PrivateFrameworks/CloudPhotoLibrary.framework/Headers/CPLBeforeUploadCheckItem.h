// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPLBEFOREUPLOADCHECKITEM_H
#define CPLBEFOREUPLOADCHECKITEM_H

@class NSMutableSet, NSMutableDictionary, NSString;

#import <Foundation/Foundation.h>

#import "CPLRecordChange.h"
#import "CPLResourceTypeSet.h"
#import "CPLBeforeUploadCheckItems.h"
#import "CPLScopedIdentifier.h"

@interface CPLBeforeUploadCheckItem : NSObject {
    NSMutableSet *_rulesForRecordFetch;
    NSMutableDictionary *_rulesForOtherRecordFetches;
    BOOL _hasCachedResultOfServerCheck;
    BOOL _recordExistsOnServer;
    CPLRecordChange *_recordOnServer;
    BOOL _checked;
    NSString *_dropReason;
    CPLResourceTypeSet *_resourcesToGenerateImageDerivatives;
    CPLResourceTypeSet *_resourcesToGenerateVideoComplementDerivatives;
    BOOL _needsToGenerateImageDerivatives;
    BOOL _needsToGenerateVideoComplementDerivatives;
}


@property (readonly, nonatomic) CPLRecordChange *change; // ivar: _change
@property (readonly, nonatomic) Class changeClass; // ivar: _changeClass
@property (readonly, nonatomic) NSUInteger estimatedResourceUploadSize;
@property (readonly, nonatomic) BOOL hasRequestedRecordFetch;
@property (readonly, nonatomic) BOOL isAsset; // ivar: _isAsset
@property (readonly, nonatomic) BOOL isTrashedOrDeletedAsset; // ivar: _isTrashedOrDeletedAsset
@property (readonly, weak, nonatomic) CPLBeforeUploadCheckItems *items; // ivar: _items
@property (readonly, nonatomic) BOOL needsToGenerateDerivatives;
@property (readonly, nonatomic) NSInteger ruleGroups; // ivar: _ruleGroups
@property (readonly, nonatomic) CPLScopedIdentifier *scopedIdentifier; // ivar: _scopedIdentifier


-(BOOL)_addRelatedRecordWithScopedIdentifierToAdditionalRecords:(id)arg0 provider:(id)arg1 error:(*id)arg2 ;
-(BOOL)_forAdditionalRecordRule:(id)arg0 check:(*unk)arg1 error:(*id)arg2 ;
-(BOOL)_forRule:(id)arg0 check:(*unk)arg1 error:(*id)arg2 ;
-(BOOL)_serverResourcesMatches:(id)arg0 ;
-(BOOL)checkBeforeUploadWithError:(*id)arg0 ;
-(BOOL)dropGeneratingDerivativesIfPossibleWithRecordOnServer:(id)arg0 error:(*id)arg1 ;
-(BOOL)prepareWithError:(*id)arg0 ;
-(BOOL)rejectChangeWithReason:(id)arg0 error:(*id)arg1 ;
-(BOOL)requestFetchForRule:(id)arg0 error:(*id)arg1 ;
-(BOOL)requestFetchOfRecordWithScopedIdentifier:(id)arg0 forRule:(id)arg1 error:(*id)arg2 ;
-(id)description;
-(id)initWithChange:(id)arg0 checkItems:(id)arg1 ;
-(id)redactedDescription;
-(void)dropChangeWithReason:(id)arg0 ;
-(void)dropResourceChangeWithReason:(id)arg0 ;
-(void)dropSharingChangeWithReason:(id)arg0 ;


@end


#endif