// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TNCHARTREFERENCESUMMARYDESCRIPTOR_H
#define TNCHARTREFERENCESUMMARYDESCRIPTOR_H

@class TSCEViewTractRef;
@protocol TSCHChartSummaryDescriptor;

#import <Foundation/Foundation.h>


@interface TNChartReferenceSummaryDescriptor : NSObject <TSCHChartSummaryDescriptor>



@property (readonly, nonatomic) unsigned short aggregateIndex;
@property (readonly, nonatomic) unsigned char columnLevel;
@property (nonatomic) unsigned char groupLabelOptions; // ivar: _groupLabelOptions
@property (readonly, nonatomic) unsigned char rowLevel;
@property (nonatomic) NSUInteger tableType; // ivar: _tableType
@property (readonly, nonatomic) TSKUIDStruct tableUID;
@property (retain, nonatomic) TSCEViewTractRef *viewTractRef; // ivar: _viewTractRef


-(id)init;
-(id)tableNameWithCalcEngine:(id)arg0 ;


@end


#endif