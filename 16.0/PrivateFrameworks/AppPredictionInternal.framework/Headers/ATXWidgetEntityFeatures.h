// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXWIDGETENTITYFEATURES_H
#define ATXWIDGETENTITYFEATURES_H

@class NSNumber;
@protocol ATXJSONSerializableProtocol;

#import <Foundation/Foundation.h>


@interface ATXWidgetEntityFeatures : NSObject <ATXJSONSerializableProtocol>



@property (retain, nonatomic) NSNumber *parentAppGlobalPrior; // ivar: _parentAppGlobalPrior
@property (retain, nonatomic) NSNumber *parentAppScore; // ivar: _parentAppScore
@property (retain, nonatomic) NSNumber *widgetGlobalPrior; // ivar: _widgetGlobalPrior


-(id)init;
-(id)initFromJSON:(id)arg0 ;
-(id)jsonRepresentation;


@end


#endif