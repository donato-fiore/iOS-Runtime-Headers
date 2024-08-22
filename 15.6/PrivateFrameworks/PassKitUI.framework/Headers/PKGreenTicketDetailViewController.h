// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKGREENTICKETDETAILVIEWCONTROLLER_H
#define PKGREENTICKETDETAILVIEWCONTROLLER_H

@class NSString, PKFelicaPassProperties;
@protocol PKTransitTicketDetailDataSource;


#import "PKTransitTicketDetailViewController.h"

@interface PKGreenTicketDetailViewController : PKTransitTicketDetailViewController <PKTransitTicketDetailDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PKFelicaPassProperties *properties; // ivar: _properties
@property (readonly) Class superclass;


-(NSInteger)transitTicketDetailNumberOfRowsForLeg:(NSUInteger)arg0 ;
-(NSUInteger)numberOfLegs;
-(id)initWithFelicaProperty:(id)arg0 ;
-(id)titleForLeg:(NSUInteger)arg0 ;
-(id)transitTicketDetailTitleForRow:(NSUInteger)arg0 leg:(NSUInteger)arg1 ;
-(id)transitTicketDetailValueForRow:(NSUInteger)arg0 leg:(NSUInteger)arg1 ;


@end


#endif