// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKDATADETECTORQUERYITEM_H
#define PKDATADETECTORQUERYITEM_H

@class CHDataDetectorQueryItem, DDScannerResult;


#import "PKDetectionQueryItem.h"

@interface PKDataDetectorQueryItem : PKDetectionQueryItem

@property (retain, nonatomic) CHDataDetectorQueryItem *coreHandwritingDataDetectorQueryItem; // ivar: _coreHandwritingDataDetectorQueryItem
@property (readonly, nonatomic) DDScannerResult *scannerResult;


-(BOOL)isEqual:(id)arg0 ;
-(id)baselinePath;
-(id)initWithCoreHandwritingDataDetectorQueryItem:(id)arg0 ;
-(id)strokeIdentifiers;


@end


#endif