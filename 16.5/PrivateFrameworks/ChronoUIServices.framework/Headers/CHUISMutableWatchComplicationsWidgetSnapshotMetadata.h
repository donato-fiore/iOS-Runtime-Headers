// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHUISMUTABLEWATCHCOMPLICATIONSWIDGETSNAPSHOTMETADATA_H
#define CHUISMUTABLEWATCHCOMPLICATIONSWIDGETSNAPSHOTMETADATA_H

@class CHSGaugeParameters, NSData, NSArray;


#import "CHUISWatchComplicationsWidgetSnapshotMetadata.h"

@interface CHUISMutableWatchComplicationsWidgetSnapshotMetadata : CHUISWatchComplicationsWidgetSnapshotMetadata

@property (copy, nonatomic) CHSGaugeParameters *gauge;
@property (copy, nonatomic) NSData *gaugeLowerTextProviderData;
@property (copy, nonatomic) NSData *gaugeProviderData;
@property (copy, nonatomic) NSData *gaugeUpperTextProviderData;
@property (copy, nonatomic) NSArray *images;
@property (copy, nonatomic) NSArray *text;




@end


#endif