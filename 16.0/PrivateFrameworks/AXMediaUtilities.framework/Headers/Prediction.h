// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PREDICTION_H
#define PREDICTION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface Prediction : NSObject

@property (nonatomic) CGRect boundingBox; // ivar: _boundingBox
@property (nonatomic) CGFloat confidence; // ivar: _confidence
@property (retain, nonatomic) NSString *label; // ivar: _label
@property (nonatomic) NSUInteger uiClass; // ivar: _uiClass


-(id)debugDescription;


@end


#endif