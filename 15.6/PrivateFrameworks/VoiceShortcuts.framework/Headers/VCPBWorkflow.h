// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPBWORKFLOW_H
#define VCPBWORKFLOW_H

@class PBCodable, NSData, NSMutableArray, NSString;
@protocol NSCopying;



@interface VCPBWorkflow : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSData *accessResourcePerWorkflowStateData; // ivar: _accessResourcePerWorkflowStateData
@property (retain, nonatomic) NSData *actionsData; // ivar: _actionsData
@property (nonatomic) CGFloat creationDate; // ivar: _creationDate
@property (readonly, nonatomic) BOOL hasAccessResourcePerWorkflowStateData;
@property (readonly, nonatomic) BOOL hasActionsData;
@property (nonatomic) BOOL hasCreationDate;
@property (nonatomic) BOOL hasIconColor;
@property (nonatomic) BOOL hasIconGlyph;
@property (readonly, nonatomic) BOOL hasImportQuestionsData;
@property (nonatomic) BOOL hasIntegerLastMigratedClientVersion;
@property (nonatomic) BOOL hasIntegerMinimumClientVersion;
@property (readonly, nonatomic) BOOL hasLastMigratedClientVersion;
@property (readonly, nonatomic) BOOL hasMinimumClientVersion;
@property (nonatomic) BOOL hasModificationDate;
@property (readonly, nonatomic) BOOL hasName;
@property (nonatomic) BOOL hasRemoteQuarantineStatus;
@property (readonly, nonatomic) BOOL hasSmartPromptPerWorkflowStateData; // ivar: _hasSmartPromptPerWorkflowStateData
@property (readonly, nonatomic) BOOL hasSubtitle;
@property (nonatomic) unsigned int iconColor; // ivar: _iconColor
@property (nonatomic) unsigned int iconGlyph; // ivar: _iconGlyph
@property (retain, nonatomic) NSData *importQuestionsData; // ivar: _importQuestionsData
@property (retain, nonatomic) NSMutableArray *inputClasses; // ivar: _inputClasses
@property (nonatomic) NSUInteger integerLastMigratedClientVersion; // ivar: _integerLastMigratedClientVersion
@property (nonatomic) NSUInteger integerMinimumClientVersion; // ivar: _integerMinimumClientVersion
@property (retain, nonatomic) NSString *lastMigratedClientVersion; // ivar: _lastMigratedClientVersion
@property (retain, nonatomic) NSString *minimumClientVersion; // ivar: _minimumClientVersion
@property (nonatomic) CGFloat modificationDate; // ivar: _modificationDate
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) int remoteQuarantineStatus; // ivar: _remoteQuarantineStatus
@property (retain, nonatomic) NSData *smartPromptPerWorkflowStateData; // ivar: _smartPromptPerWorkflowStateData
@property (retain, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) NSMutableArray *workflowTypes; // ivar: _workflowTypes


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)inputClassesAtIndex:(NSUInteger)arg0 ;
-(id)remoteQuarantineStatusAsString:(int)arg0 ;
-(id)workflowTypesAtIndex:(NSUInteger)arg0 ;
-(int)StringAsRemoteQuarantineStatus:(id)arg0 ;
-(void)addInputClasses:(id)arg0 ;
-(void)addWorkflowTypes:(id)arg0 ;
-(void)clearInputClasses;
-(void)clearWorkflowTypes;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif