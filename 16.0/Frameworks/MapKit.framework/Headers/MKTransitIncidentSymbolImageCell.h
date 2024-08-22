// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKTRANSITINCIDENTSYMBOLIMAGECELL_H
#define MKTRANSITINCIDENTSYMBOLIMAGECELL_H

@class NSString;
@protocol MKTransitItemIncidentView;


#import "MKCustomSeparatorCell.h"
#import "MKTransitIncidentItemCellBackgroundView.h"
#import "MKTransitIncidentViewModel.h"

@interface MKTransitIncidentSymbolImageCell : MKCustomSeparatorCell <MKTransitItemIncidentView>

 {
    MKTransitIncidentItemCellBackgroundView *_backgroundView;
}


@property (nonatomic) NSInteger cellPosition; // ivar: _cellPosition
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL padBottom; // ivar: _padBottom
@property (readonly) Class superclass;
@property (retain, nonatomic) MKTransitIncidentViewModel *viewModel; // ivar: _viewModel


-(void)_configureWithMessage:(id)arg0 referenceDate:(id)arg1 lastUpdated:(id)arg2 incidentIsBlocking:(BOOL)arg3 shouldShowImage:(BOOL)arg4 inSiri:(BOOL)arg5 ;
-(void)_updateAppearance;
-(void)configureWithIncident:(id)arg0 referenceDate:(id)arg1 shouldShowImage:(BOOL)arg2 inSiri:(BOOL)arg3 ;
-(void)configureWithIncidentMessage:(id)arg0 referenceDate:(id)arg1 shouldShowImage:(BOOL)arg2 inSiri:(BOOL)arg3 ;
-(void)configureWithMessage:(id)arg0 incident:(id)arg1 referenceDate:(id)arg2 shouldShowImage:(BOOL)arg3 inSiri:(BOOL)arg4 ;


@end


#endif