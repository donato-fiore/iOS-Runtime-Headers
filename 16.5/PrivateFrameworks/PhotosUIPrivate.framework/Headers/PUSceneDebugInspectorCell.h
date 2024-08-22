// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUSCENEDEBUGINSPECTORCELL_H
#define PUSCENEDEBUGINSPECTORCELL_H

@class UITableViewCell, UILabel;


#import "PUSceneDebugInspectorSceneViewModel.h"

@interface PUSceneDebugInspectorCell : UITableViewCell

@property (retain, nonatomic) UILabel *countLabel; // ivar: _countLabel
@property (retain, nonatomic) UILabel *coverageLabel; // ivar: _coverageLabel
@property (retain, nonatomic) UILabel *isIndexedLabel; // ivar: _isIndexedLabel
@property (retain, nonatomic) UILabel *keywordLabel; // ivar: _keywordLabel
@property (retain, nonatomic) UILabel *sceneIdentifierLabel; // ivar: _sceneIdentifierLabel
@property (retain, nonatomic) UILabel *synonymsLabel; // ivar: _synonymsLabel
@property (retain, nonatomic) UILabel *thresholdLabel; // ivar: _thresholdLabel
@property (retain, nonatomic) PUSceneDebugInspectorSceneViewModel *viewModel; // ivar: _viewModel


+(id)reuseIdentifier;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)prepareForReuse;


@end


#endif