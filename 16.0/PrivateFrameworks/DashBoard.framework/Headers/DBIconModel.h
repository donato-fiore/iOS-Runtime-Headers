// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBICONMODEL_H
#define DBICONMODEL_H

@class SBHIconModel, NSString, NSArray;
@protocol DBIconModelApplicationDataSource, DBEnvironment;



@interface DBIconModel : SBHIconModel

@property (readonly, nonatomic) NSString *OEMIconLabel;
@property (weak, nonatomic) NSObject<DBIconModelApplicationDataSource> *carApplicationDataSource; // ivar: _carApplicationDataSource
@property (readonly, nonatomic) NSUInteger columnCount;
@property (copy, nonatomic) NSString *current_OEMIconLabel; // ivar: _current_OEMIconLabel
@property (nonatomic) BOOL current_isSet; // ivar: _current_isSet
@property (nonatomic) CGRect current_screenBounds; // ivar: _current_screenBounds
@property (nonatomic) BOOL current_showsOEMIcon; // ivar: _current_showsOEMIcon
@property (nonatomic) NSUInteger current_statusBarEdge; // ivar: _current_statusBarEdge
@property (weak, nonatomic) NSObject<DBEnvironment> *environment; // ivar: _environment
@property (readonly, nonatomic) NSArray *hiddenBundleIdentifiers;
@property (nonatomic) CGSize iconImageSize; // ivar: _iconImageSize
@property (nonatomic) NSUInteger interactionAffordances; // ivar: _interactionAffordances
@property (copy, nonatomic) NSString *metadata_OEMIconLabel; // ivar: _metadata_OEMIconLabel
@property (retain, nonatomic) NSArray *metadata_hiddenBundleIdentifiers; // ivar: _metadata_hiddenBundleIdentifiers
@property (nonatomic) CGRect metadata_screenBounds; // ivar: _metadata_screenBounds
@property (nonatomic) BOOL metadata_showsOEMIcon; // ivar: _metadata_showsOEMIcon
@property (readonly, nonatomic) NSUInteger rowCount;
@property (readonly, nonatomic) CGRect screenBounds;
@property (readonly, nonatomic) BOOL showsOEMIcon;


-(BOOL)_showInternalApps;
-(BOOL)_showPrototypeApps;
-(BOOL)isIconVisible:(id)arg0 ;
-(BOOL)supportsDock;
-(id)analyticsIconRepresentation;
-(id)exportIconLayoutState;
-(id)exportStateForCarKit;
-(id)iconModelMetadata;
-(id)initWithStore:(id)arg0 carApplicationDataSource:(id)arg1 ;
-(void)_importStateWithoutLayout:(id)arg0 ;
-(void)didUnarchiveMetadata:(id)arg0 ;
-(void)importState:(id)arg0 ;
-(void)loadAllIcons;
-(void)resetCurrentIconState;


@end


#endif