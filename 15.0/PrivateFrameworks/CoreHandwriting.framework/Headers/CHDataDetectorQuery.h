// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHDATADETECTORQUERY_H
#define CHDATADETECTORQUERY_H

@class DDScannerServiceConfiguration, NSArray;


#import "CHQuery.h"

@interface CHDataDetectorQuery : CHQuery {
    DDScannerServiceConfiguration *_dataDetectorConfiguration;
}


@property (copy, nonatomic, setter=_setFoundItems:) NSArray *foundItems; // ivar: _foundItems


-(id)_dataDetectorResultsForSessionResult:(id)arg0 ;
-(id)debugName;
-(id)initWithRecognitionSession:(id)arg0 ;
-(void)_enumerateDetectedRangesForContextualTextResults:(id)arg0 usingBlock:(id)arg1 ;
-(void)dealloc;
-(void)q_updateQueryResult;
-(void)stop;


@end


#endif