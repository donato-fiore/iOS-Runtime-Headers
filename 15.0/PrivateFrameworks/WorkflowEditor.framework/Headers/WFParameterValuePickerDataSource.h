// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFPARAMETERVALUEPICKERDATASOURCE_H
#define WFPARAMETERVALUEPICKERDATASOURCE_H

@class UITableViewDiffableDataSource, NSSet, INObjectCollection, UILocalizedIndexedCollation, WFParameter<WFParameterValuePickable>;
@protocol WFVariableProvider, WFVariableUIDelegate;



@interface WFParameterValuePickerDataSource : UITableViewDiffableDataSource

@property (copy, nonatomic) NSSet *allowedVariableTypes; // ivar: _allowedVariableTypes
@property (retain, nonatomic) INObjectCollection *collection; // ivar: _collection
@property (readonly, nonatomic) NSUInteger itemsCount;
@property (readonly, nonatomic) UILocalizedIndexedCollation *localizedCollation; // ivar: _localizedCollation
@property (readonly, nonatomic) WFParameter<WFParameterValuePickable> *parameter; // ivar: _parameter
@property (readonly, nonatomic) NSUInteger sectionsCount;
@property (weak, nonatomic) NSObject<WFVariableProvider> *variableProvider; // ivar: _variableProvider
@property (weak, nonatomic) NSObject<WFVariableUIDelegate> *variableUIDelegate; // ivar: _variableUIDelegate


+(id)variableSectionIdentifier;
-(NSInteger)tableView:(id)arg0 sectionForSectionIndexTitle:(id)arg1 atIndex:(NSInteger)arg2 ;
-(id)displayVariables;
-(id)displayVariablesWithTitle:(id)arg0 ;
-(id)initWithParameter:(id)arg0 tableView:(id)arg1 cellProvider:(id)arg2 ;
-(id)parameterStateAtIndexPath:(id)arg0 ;
-(id)sectionIndexTitlesForTableView:(id)arg0 ;
-(id)snapshotForCollection:(id)arg0 filterVariableTitle:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)applyCollection:(id)arg0 animatingDifferences:(BOOL)arg1 filterVariableTitle:(id)arg2 ;
-(void)applyCollection:(id)arg0 animatingDifferences:(BOOL)arg1 filterVariableTitle:(id)arg2 completion:(id)arg3 ;
-(void)applyEmptyCollectionAnimatingDifferences:(BOOL)arg0 completion:(id)arg1 ;


@end


#endif