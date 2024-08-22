// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVASSETSEGMENTREPORTSAMPLEINFORMATION_H
#define AVASSETSEGMENTREPORTSAMPLEINFORMATION_H


#import <Foundation/Foundation.h>


@interface AVAssetSegmentReportSampleInformation : NSObject

@property (readonly, nonatomic) BOOL isSyncSample; // ivar: _isSyncSample
@property (readonly, nonatomic) NSInteger length; // ivar: _length
@property (readonly, nonatomic) NSInteger offset; // ivar: _offset
@property (readonly, nonatomic) ? presentationTimeStamp; // ivar: _presentationTimeStamp


-(id)initWithFigSegmentReportSampleInformationDictionary:(id)arg0 ;
-(void)dealloc;


@end


#endif