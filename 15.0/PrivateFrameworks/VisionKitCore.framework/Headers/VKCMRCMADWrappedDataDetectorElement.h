// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VKCMRCMADWRAPPEDDATADETECTORELEMENT_H
#define VKCMRCMADWRAPPEDDATADETECTORELEMENT_H

@class NSArray, DDScannerResult;
@protocol NSSecureCoding;


#import "VKCMRCDataDetectorElement.h"
#import "VKQuad.h"

@interface VKCMRCMADWrappedDataDetectorElement : VKCMRCDataDetectorElement <NSSecureCoding>

 {
    NSArray *_boundingQuads;
}


@property (nonatomic) CGRect boundingBox; // ivar: _boundingBox
@property (nonatomic) NSUInteger dataDetectorTypes; // ivar: _dataDetectorTypes
@property (retain, nonatomic) VKQuad *quad; // ivar: _quad
@property (retain, nonatomic) DDScannerResult *scannerResult; // ivar: _scannerResult


+(BOOL)supportsSecureCoding;
-(id)boundingQuads;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMADMRCResultItem:(id)arg0 scannerResult:(id)arg1 ;
-(id)initWithScannerResult:(id)arg0 quad:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif