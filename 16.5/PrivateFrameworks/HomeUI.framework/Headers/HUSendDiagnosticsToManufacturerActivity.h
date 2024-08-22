// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUSENDDIAGNOSTICSTOMANUFACTURERACTIVITY_H
#define HUSENDDIAGNOSTICSTOMANUFACTURERACTIVITY_H

@class UIActivity, HFAccessoryDiagnosticItem;



@interface HUSendDiagnosticsToManufacturerActivity : UIActivity

@property (retain, nonatomic) HFAccessoryDiagnosticItem *diagnosticItem; // ivar: _diagnosticItem


-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)activityImage;
-(id)activityTitle;
-(id)activityType;
-(id)activityViewController;
-(id)initWithDiagnosticItem:(id)arg0 ;
-(void)prepareWithActivityItems:(id)arg0 ;


@end


#endif