// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFVARIABLECONFIGURATIONVIEWCONTROLLER_H
#define WFVARIABLECONFIGURATIONVIEWCONTROLLER_H

@class UIViewController, NSOrderedSet, WFCoercionVariableAggrandizement, WFDateFormatVariableAggrandizement, NSString, WFDictionaryValueVariableAggrandizement, NSArray, WFPropertyVariableAggrandizement, UITableView, WFUnitVariableAggrandizement, WFVariable;
@protocol UITableViewDataSource, UITableViewDelegate, WFVariableConfigurationCellSizingDelegate, WFVariableDelegate, WFVariableObserver, WFVariableConfigurationHeaderViewDelegate, WFVariableConfigurationOptionsViewControllerDelegate, WFVariableConfigurationViewControllerDelegate;


#import "WFVariableConfigurationHeaderView.h"
#import "WFVariableConfigurationInfoView.h"

@interface WFVariableConfigurationViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, WFVariableConfigurationCellSizingDelegate, WFVariableDelegate, WFVariableObserver, WFVariableConfigurationHeaderViewDelegate, WFVariableConfigurationOptionsViewControllerDelegate>



@property (retain, nonatomic) NSOrderedSet *classesForVisibleAggrandizements; // ivar: _classesForVisibleAggrandizements
@property (retain, nonatomic) WFCoercionVariableAggrandizement *coercionAggrandizement; // ivar: _coercionAggrandizement
@property (retain, nonatomic) WFDateFormatVariableAggrandizement *dateFormatAggrandizement; // ivar: _dateFormatAggrandizement
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFVariableConfigurationViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) WFDictionaryValueVariableAggrandizement *dictionaryValueAggrandizement; // ivar: _dictionaryValueAggrandizement
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) WFVariableConfigurationHeaderView *headerView; // ivar: _headerView
@property (weak, nonatomic) WFVariableConfigurationInfoView *infoView; // ivar: _infoView
@property (retain, nonatomic) NSArray *properties; // ivar: _properties
@property (retain, nonatomic) WFPropertyVariableAggrandizement *propertyAggrandizement; // ivar: _propertyAggrandizement
@property (nonatomic) BOOL propertyListExpanded; // ivar: _propertyListExpanded
@property (nonatomic) NSUInteger resultType; // ivar: _resultType
@property (readonly) Class superclass;
@property (weak, nonatomic) UITableView *tableView; // ivar: _tableView
@property (retain, nonatomic) WFUnitVariableAggrandizement *unitAggrandizement; // ivar: _unitAggrandizement
@property (nonatomic) BOOL userExplicitlySelectedDefaultProperty; // ivar: _userExplicitlySelectedDefaultProperty
@property (readonly, nonatomic) WFVariable *variable; // ivar: _variable


+(id)defaultPropertyForContentClass:(Class)arg0 resultType:(NSUInteger)arg1 ;
-(BOOL)hasMeasurementUnit;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(Class)postCoercionContentClass;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)currentPropertyMeasurementUnitType;
-(id)initWithVariable:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(struct CGRect )frameForConfigurationCell:(id)arg0 withProposedFrame:(struct CGRect )arg1 ;
-(void)availableVariablesDidChange;
-(void)dealloc;
-(void)generateUpdatedVariable;
-(void)headerViewTypeTapped:(id)arg0 ;
-(void)loadView;
-(void)optionsViewController:(id)arg0 didSelectOption:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateHeaderView;
-(void)updateVisibleAggrandizements;
-(void)variableDidChange:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif