// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPLSCOPECHANGE_H
#define CPLSCOPECHANGE_H

@class NSDate, NSString;
@protocol NSSecureCoding, NSCopying;


#import "CPLRecordChange.h"
#import "CPLAccountFlags.h"
#import "CPLLibraryInfo.h"
#import "CPLLibraryState.h"
#import "CPLEngineScope.h"
#import "CPLScopedIdentifier.h"
#import "CPLShare.h"

@interface CPLScopeChange : CPLRecordChange <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) CPLAccountFlags *accountFlags;
@property (nonatomic, getter=isActivated) BOOL activated; // ivar: _activated
@property (nonatomic) NSInteger busyState; // ivar: _busyState
@property (readonly, nonatomic) BOOL containerHasBeenWiped; // ivar: _containerHasBeenWiped
@property (readonly, nonatomic) NSDate *deleteDate;
@property (readonly, nonatomic, getter=isDisabled) BOOL disabled;
@property (readonly, nonatomic) NSDate *disabledDate;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) CPLLibraryInfo *libraryInfo; // ivar: _libraryInfo
@property (retain, nonatomic) CPLLibraryState *libraryState; // ivar: _libraryState
@property (nonatomic) NSUInteger pullTaskItem; // ivar: _pullTaskItem
@property (copy, nonatomic) NSDate *recordModificationDate;
@property (retain, nonatomic) CPLEngineScope *scope; // ivar: _scope
@property (nonatomic) NSInteger scopeType; // ivar: _scopeType
@property (copy, nonatomic) CPLScopedIdentifier *scopedIdentifier;
@property (retain, nonatomic) CPLShare *share; // ivar: _share
@property (copy, nonatomic) NSString *stagingScopeIdentifier; // ivar: _stagingScopeIdentifier
@property (copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)cplShouldIgnorePropertyForEquality:(id)arg0 ;
+(BOOL)shouldAutoActivateScopeWithType:(NSInteger)arg0 ;
+(BOOL)supportsSecureCoding;
+(BOOL)supportsStagingScopeForScopeWithType:(NSInteger)arg0 ;
+(Class)scopeChangeClassForType:(NSInteger)arg0 ;
+(id)descriptionForBusyState:(NSInteger)arg0 ;
+(id)descriptionForScopeType:(NSInteger)arg0 ;
+(id)mappingForScopeBusyStateDescription;
+(id)mappingForScopeTypeDescription;
+(id)newDeleteScopeChangeWithScopeIdentifier:(id)arg0 type:(NSInteger)arg1 ;
+(id)newScopeChangeInferClassWithScopeIdentifier:(id)arg0 type:(NSInteger)arg1 ;
+(id)newScopeChangeWithAutomaticScopeIdentifierForScopeType:(NSInteger)arg0 ;
+(id)newScopeChangeWithScopeIdentifier:(id)arg0 type:(NSInteger)arg1 ;
-(BOOL)isLibraryShare;
-(BOOL)isScopeChange;
-(BOOL)needsToSetScopeIdentifier;
-(BOOL)shouldAlwaysUpdateScopeInfoWhenPossible;
-(NSInteger)defaultFlags;
-(id)_additionalDescription;
-(id)assetCountPerType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithScopeIdentifier:(id)arg0 type:(NSInteger)arg1 ;
-(id)redactedDescription;
-(void)_setChangeType:(NSUInteger)arg0 ;
-(void)updateScopeFromScopeChange:(id)arg0 direction:(NSUInteger)arg1 didHaveChanges:(*BOOL)arg2 ;
-(void)updateScopeIdentifier:(id)arg0 ;


@end


#endif