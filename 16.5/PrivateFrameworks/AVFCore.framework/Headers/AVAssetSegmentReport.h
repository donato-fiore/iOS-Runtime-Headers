// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVASSETSEGMENTREPORT_H
#define AVASSETSEGMENTREPORT_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface AVAssetSegmentReport : NSObject

@property (readonly, nonatomic) NSInteger segmentType; // ivar: _segmentType
@property (readonly, nonatomic) NSArray *trackReports; // ivar: _trackReports


-(id)initWithFigSegmentReportDictionary:(id)arg0 ;
-(void)dealloc;


@end


#endif