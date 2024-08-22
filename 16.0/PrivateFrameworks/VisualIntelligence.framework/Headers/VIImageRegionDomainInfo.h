// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VIIMAGEREGIONDOMAININFO_H
#define VIIMAGEREGIONDOMAININFO_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface VIImageRegionDomainInfo : NSObject <NSCopying>



@property (readonly, nonatomic) BOOL barcodeResultsRequired; // ivar: _barcodeResultsRequired
@property (readonly, nonatomic) NSString *displayLabel; // ivar: _displayLabel
@property (readonly, nonatomic) NSString *displayMessage; // ivar: _displayMessage
@property (readonly, nonatomic) NSString *domainKey; // ivar: _domainKey
@property (readonly, nonatomic) CGPoint focalPoint; // ivar: _focalPoint
@property (readonly, nonatomic) NSString *glyphName; // ivar: _glyphName
@property (readonly, nonatomic) BOOL hasFocalPoint; // ivar: _hasFocalPoint
@property (readonly, nonatomic) BOOL isLowConfidence; // ivar: _isLowConfidence
@property (readonly, nonatomic) NSString *labelName; // ivar: _labelName
@property (readonly, nonatomic) BOOL ocrResultsRequired; // ivar: _ocrResultsRequired


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithDomainKey:(id)arg0 labelName:(id)arg1 glyphName:(id)arg2 displayLabel:(id)arg3 displayMessage:(id)arg4 hasFocalPoint:(BOOL)arg5 focalPoint:(struct CGPoint )arg6 ocrResultsRequired:(BOOL)arg7 barcodeResultsRequired:(BOOL)arg8 isLowConfidence:(BOOL)arg9 ;


@end


#endif