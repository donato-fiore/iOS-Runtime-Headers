// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIPERSONDETECTORBOUNDINGBOX_H
#define SIPERSONDETECTORBOUNDINGBOX_H


#import <Foundation/Foundation.h>


@interface SIPersonDetectorBoundingBox : NSObject

@property (nonatomic) CGRect boundingBox; // ivar: _boundingBox
@property (nonatomic) float confidence; // ivar: _confidence


-(id)initWithBoundingBox:(struct CGRect )arg0 confidence:(float)arg1 ;


@end


#endif