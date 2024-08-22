// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CBABCURVECONFIGURATION_H
#define CBABCURVECONFIGURATION_H

@class NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface CBABCurveConfiguration : NSObject

@property (nonatomic) BOOL isBuiltin; // ivar: _isBuiltin
@property (nonatomic) BOOL isEnergySaving; // ivar: _isEnergySaving
@property (retain, nonatomic) NSNumber *maxBrightness; // ivar: _maxBrightness
@property (retain, nonatomic) NSNumber *productID; // ivar: _productID
@property (retain, nonatomic) NSString *uuid; // ivar: _uuid
@property (retain, nonatomic) NSNumber *vendorID; // ivar: _vendorID


-(id)description;
-(void)dealloc;


@end


#endif