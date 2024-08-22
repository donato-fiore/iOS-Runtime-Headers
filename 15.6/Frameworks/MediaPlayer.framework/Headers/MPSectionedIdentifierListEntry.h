// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSECTIONEDIDENTIFIERLISTENTRY_H
#define MPSECTIONEDIDENTIFIERLISTENTRY_H

@class NSString, NSArray;
@protocol _MPSectionedIdentifierListEncodableNextEntriesProviding, NSSecureCoding, MPSectionedIdentifierListEnumerationResult;

#import <Foundation/Foundation.h>

#import "MPSectionedIdentifierListEntryPositionKey.h"
#import "MPSectionedIdentifierListEntry.h"

@interface MPSectionedIdentifierListEntry : NSObject <_MPSectionedIdentifierListEncodableNextEntriesProviding, NSSecureCoding, MPSectionedIdentifierListEnumerationResult>



@property (nonatomic) NSInteger branchDepth; // ivar: _branchDepth
@property (readonly, nonatomic, getter=isDataSourceRemoved) BOOL dataSourceRemoved; // ivar: _dataSourceRemoved
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger entryType;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *hostedSectionIdentifier; // ivar: _hostedSectionIdentifier
@property (readonly, nonatomic) NSArray *nextEntries; // ivar: _nextEntries
@property (readonly, nonatomic) MPSectionedIdentifierListEntryPositionKey *positionKey; // ivar: _positionKey
@property (weak, nonatomic) MPSectionedIdentifierListEntry *previousEntry; // ivar: _previousEntry
@property (readonly, nonatomic) NSString *sectionIdentifier; // ivar: _sectionIdentifier
@property (readonly) Class superclass;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)_stateDumpObject;
-(id)encodableNextEntriesWithExclusiveAccessToken:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPositionKey:(id)arg0 sectionIdentifier:(id)arg1 ;
-(id)itemResult;
-(id)trackingEntryResult;
-(void)addBranch:(id)arg0 forceBranchDepthIncrease:(BOOL)arg1 ;
-(void)addNextEntry:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)prepareForDealloc;


@end


#endif