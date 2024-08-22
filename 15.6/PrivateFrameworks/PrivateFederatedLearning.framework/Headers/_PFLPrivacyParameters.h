// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PFLPRIVACYPARAMETERS_H
#define _PFLPRIVACYPARAMETERS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _PFLPrivacyParameters : NSObject {
    NSString *_identifier;
}


@property (nonatomic) NSUInteger dimension; // ivar: _dimension
@property (nonatomic) CGFloat epsilon; // ivar: _epsilon
@property (nonatomic) NSInteger maxRejection; // ivar: _maxRejection
@property (nonatomic) CGFloat minCDProduct; // ivar: _minCDProduct
@property (nonatomic) CGFloat normmax; // ivar: _normmax
@property (nonatomic) CGFloat precision; // ivar: _precision
@property (nonatomic) CGFloat reconstructionProbability; // ivar: _reconstructionProbability
@property (nonatomic) CGFloat rho; // ivar: _rho
@property (nonatomic) BOOL shouldUseCustomEpsilon; // ivar: _shouldUseCustomEpsilon


-(BOOL)populateFromDefaultFile;
-(BOOL)populateFromFile:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;


@end


#endif