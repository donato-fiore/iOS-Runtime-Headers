// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUSSOFTWAREUPDATESCANCELL_H
#define SUSSOFTWAREUPDATESCANCELL_H

@class PSTableCell, NSString;



@interface SUSSoftwareUpdateScanCell : PSTableCell

@property (retain, nonatomic) NSString *currentVersion; // ivar: _currentVersion
@property (nonatomic) int state; // ivar: _state
@property BOOL suPathsRestricted; // ivar: _suPathsRestricted
@property BOOL updatesDeferred; // ivar: _updatesDeferred


+(NSInteger)cellStyle;
-(CGFloat)preferredHeightWithTable:(id)arg0 ;
-(id)contentUnavailableConfigurationForState:(int)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(id)upToDateManagedText;
-(id)upToDateText;
-(id)upToDateWithAlternate;
-(void)layoutSubviews;


@end


#endif