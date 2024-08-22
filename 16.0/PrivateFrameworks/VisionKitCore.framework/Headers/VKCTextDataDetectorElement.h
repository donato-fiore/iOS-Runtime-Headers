// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VKCTEXTDATADETECTORELEMENT_H
#define VKCTEXTDATADETECTORELEMENT_H

@class NSArray, DDScannerResult, CRDataDetectorsOutputRegion;


#import "VKCBaseDataDetectorElement.h"

@interface VKCTextDataDetectorElement : VKCBaseDataDetectorElement {
    NSArray *_boundingQuads;
    DDScannerResult *_scannerResult;
}


@property (copy, nonatomic) NSArray *_children; // ivar: __children
@property (readonly, nonatomic) _NSRange characterRange;
@property (nonatomic) BOOL childrenCreated; // ivar: _childrenCreated
@property (readonly, nonatomic) NSUInteger crDataType; // ivar: _crDataType
@property (nonatomic) NSUInteger dataDetectorTypes; // ivar: _dataDetectorTypes
@property (readonly, nonatomic) CRDataDetectorsOutputRegion *ddOutputRegion;


+(id)dataDetectorElementFromCROutputRegion:(id)arg0 parentDocument:(id)arg1 ;
-(BOOL)isTextDataDetector;
-(BOOL)isUnitConversionDataDetector;
-(NSUInteger)dataType;
-(id)boundingQuads;
-(id)children;
-(id)debugMenu;
-(id)initWithCROutputRegion:(id)arg0 parentDocument:(id)arg1 ;
-(id)initWithScannerResult:(id)arg0 ;
-(id)scannerResult;
-(void)createChildrenIfNecessary;


@end


#endif