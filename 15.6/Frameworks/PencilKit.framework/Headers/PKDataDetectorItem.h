// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKDATADETECTORITEM_H
#define PKDATADETECTORITEM_H

@class DDScannerResult;


#import "PKDetectionItem.h"

@interface PKDataDetectorItem : PKDetectionItem

@property (readonly, nonatomic) *__DDResult coreResult;
@property (readonly, nonatomic) DDScannerResult *scannerResult;


+(id)dataDetectorItemWithQueryItem:(id)arg0 sessionManager:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_baselinePath;
-(id)drawing;
-(id)strokeColor;


@end


#endif