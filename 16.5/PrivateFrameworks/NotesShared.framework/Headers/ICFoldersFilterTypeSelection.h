// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICFOLDERSFILTERTYPESELECTION_H
#define ICFOLDERSFILTERTYPESELECTION_H

@class NSArray, NSString, NSManagedObjectContext;


#import "ICFilterTypeSelection.h"

@interface ICFoldersFilterTypeSelection : ICFilterTypeSelection

@property (readonly, nonatomic) BOOL containsSharedFolder;
@property (retain, nonatomic) NSArray *folderIdentifiers; // ivar: _folderIdentifiers
@property (readonly, copy, nonatomic) NSString *folderSummaryList;
@property (nonatomic) NSUInteger inclusionType; // ivar: _inclusionType
@property (readonly, nonatomic) NSManagedObjectContext *managedObjectContext; // ivar: _managedObjectContext


+(id)keyPathsForValuesAffectingIsEmpty;
-(BOOL)isEmpty;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToICFoldersFilterTypeSelection:(id)arg0 ;
-(BOOL)isValid;
-(NSInteger)filterType;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)emptySummary;
-(id)emptySummaryTitle;
-(id)filterName;
-(id)folderTitlesForIdentifiers:(id)arg0 ;
-(id)initWithManagedObjectContext:(id)arg0 inclusionType:(NSUInteger)arg1 folderIdentifiers:(id)arg2 ;
-(id)rawFilterValue;
-(id)shortEmptySummary;
-(void)addFolderIdentifier:(id)arg0 ;
-(void)removeFolderIdentifier:(id)arg0 ;


@end


#endif