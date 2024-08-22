// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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


+(BOOL)cplShouldIgnorePropertyForEquality:(id)arg0 ;
+(BOOL)shouldAutoActivateScopeWithType:(NSInteger)arg0 ;
+(Class)scopeChangeClassForType:(NSInteger)arg0 ;
+(id)descriptionForScopeType:(NSInteger)arg0 ;
+(id)mappingForScopeTypeDescription;
+(id)newDeleteScopeChangeWithScopeIdentifier:(id)arg0 type:(NSInteger)arg1 ;
+(id)newScopeChangeInferClassWithScopeIdentifier:(id)arg0 type:(NSInteger)arg1 ;
+(id)newScopeChangeWithScopeIdentifier:(id)arg0 type:(NSInteger)arg1 ;
-(BOOL)isScopeChange;
-(NSInteger)defaultFlags;
-(id)assetCountPerType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithScopeIdentifier:(id)arg0 type:(NSInteger)arg1 ;
-(id)redactedDescription;
-(void)_setChangeType:(NSUInteger)arg0 ;
-(void)udpateScopeFromScopeChange:(id)arg0 direction:(NSUInteger)arg1 didHaveChanges:(*BOOL)arg2 ;


@end


#endif