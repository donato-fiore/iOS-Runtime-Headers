// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKSHINKANSENTICKETDETAILVIEWCONTROLLER_H
#define PKSHINKANSENTICKETDETAILVIEWCONTROLLER_H

@class NSMutableArray, NSString, PKFelicaPassProperties;
@protocol PKTransitTicketDetailDataSource;


#import "PKTransitTicketDetailViewController.h"

@interface PKShinkansenTicketDetailViewController : PKTransitTicketDetailViewController <PKTransitTicketDetailDataSource>

 {
    NSMutableArray *_train1Titles;
    NSMutableArray *_train2Titles;
    NSMutableArray *_train1Values;
    NSMutableArray *_train2Values;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PKFelicaPassProperties *properties; // ivar: _properties
@property (readonly) Class superclass;


-(NSInteger)transitTicketDetailNumberOfRowsForLeg:(NSUInteger)arg0 ;
-(NSUInteger)numberOfLegs;
-(id)_transitTicketTitleForDetail:(NSUInteger)arg0 ;
-(id)_transitTicketValueForDetail:(NSUInteger)arg0 forSecondaryTrain:(BOOL)arg1 ;
-(id)initWithFelicaProperty:(id)arg0 ;
-(id)titleForLeg:(NSUInteger)arg0 ;
-(id)transitTicketDetailTitleForRow:(NSUInteger)arg0 leg:(NSUInteger)arg1 ;
-(id)transitTicketDetailValueForRow:(NSUInteger)arg0 leg:(NSUInteger)arg1 ;
-(void)_prepareLabelsAndValues;


@end


#endif