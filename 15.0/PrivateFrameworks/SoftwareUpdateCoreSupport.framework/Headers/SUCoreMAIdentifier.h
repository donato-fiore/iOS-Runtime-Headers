// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUCOREMAIDENTIFIER_H
#define SUCOREMAIDENTIFIER_H

@class NSData, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SUCoreMAIdentifier : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSData *measurement; // ivar: _measurement
@property (retain, nonatomic) NSString *measurementAlgorithm; // ivar: _measurementAlgorithm
@property (retain, nonatomic) NSString *productBuildVersion; // ivar: _productBuildVersion
@property (retain, nonatomic) NSString *productVersion; // ivar: _productVersion
@property (retain, nonatomic) NSString *releaseType; // ivar: _releaseType


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProductVersion:(id)arg0 productBuildVersion:(id)arg1 releaseType:(id)arg2 measurement:(id)arg3 measurementAlgorithm:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif