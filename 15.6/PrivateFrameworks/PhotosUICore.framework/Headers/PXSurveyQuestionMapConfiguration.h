// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSURVEYQUESTIONMAPCONFIGURATION_H
#define PXSURVEYQUESTIONMAPCONFIGURATION_H

@class MKMapView, UIImage, UIView, NSString, CLLocation;
@protocol PXSurveyQuestionConfiguration;

#import <Foundation/Foundation.h>

#import "PXSurveyQuestionConfigurationHandlers.h"

@interface PXSurveyQuestionMapConfiguration : NSObject <PXSurveyQuestionConfiguration>

 {
    MKMapView *_mapView;
}


@property (readonly, nonatomic) UIImage *contentImageForOneUp;
@property (readonly, nonatomic) CGRect contentRectForOneUp;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PXSurveyQuestionConfigurationHandlers *handlers; // ivar: _handlers
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CLLocation *location; // ivar: _location
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title; // ivar: _title


-(id)init;
-(id)initWithTitle:(id)arg0 location:(id)arg1 ;
-(void)layoutContentViewInRect:(struct CGRect )arg0 ;


@end


#endif