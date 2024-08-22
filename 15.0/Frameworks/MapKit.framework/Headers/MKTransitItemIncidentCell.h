// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKTRANSITITEMINCIDENTCELL_H
#define MKTRANSITITEMINCIDENTCELL_H

@class NSString;
@protocol MKTransitItemIncidentView;


#import "MKCustomSeparatorCell.h"
#import "MKTransitItemIncidentView.h"

@interface MKTransitItemIncidentCell : MKCustomSeparatorCell <MKTransitItemIncidentView>

 {
    MKTransitItemIncidentView *_incidentView;
}


@property (nonatomic) NSInteger cellPosition;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL padBottom;
@property (readonly) Class superclass;


-(id)initWithReuseIdentifier:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_configureViews;
-(void)_updateIncidentViewBottomOffset;
-(void)configureWithIncident:(id)arg0 referenceDate:(id)arg1 shouldShowImage:(BOOL)arg2 inSiri:(BOOL)arg3 ;
-(void)configureWithIncidentMessage:(id)arg0 referenceDate:(id)arg1 shouldShowImage:(BOOL)arg2 inSiri:(BOOL)arg3 ;
-(void)configureWithMessage:(id)arg0 incident:(id)arg1 referenceDate:(id)arg2 shouldShowImage:(BOOL)arg3 inSiri:(BOOL)arg4 ;
-(void)setLeadingSeparatorInset:(CGFloat)arg0 ;
-(void)setSeparatorHidden:(BOOL)arg0 ;
-(void)setTrailingSeparatorInset:(CGFloat)arg0 ;


@end


#endif