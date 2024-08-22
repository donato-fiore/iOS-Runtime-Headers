// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MADIMAGESAFETYCLASSIFICATIONRESULT_H
#define MADIMAGESAFETYCLASSIFICATIONRESULT_H

@class NSDictionary;


#import "MADResult.h"

@interface MADImageSafetyClassificationResult : MADResult

@property (readonly, nonatomic) NSDictionary *attributes; // ivar: _attributes
@property (readonly, nonatomic) BOOL isSensitive; // ivar: _isSensitive


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIsSensitive:(BOOL)arg0 andAttributes:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif