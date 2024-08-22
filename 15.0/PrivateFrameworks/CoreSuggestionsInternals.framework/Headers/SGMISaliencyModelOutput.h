// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGMISALIENCYMODELOUTPUT_H
#define SGMISALIENCYMODELOUTPUT_H

@class MLMultiArray;

#import <Foundation/Foundation.h>


@interface SGMISaliencyModelOutput : NSObject

@property (retain, nonatomic) MLMultiArray *data; // ivar: _data


-(CGFloat)regularScore;
-(CGFloat)salientScore;
-(id)initWithData:(id)arg0 ;


@end


#endif