// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CADISPLAYPIXELCONSTRAINTS_H
#define CADISPLAYPIXELCONSTRAINTS_H

@class NSString;
@protocol CAPixelConstraints;

#import <Foundation/Foundation.h>


@interface CADisplayPixelConstraints : NSObject <CAPixelConstraints>

 {
    *float _nits;
    *float _apl;
    NSUInteger _n;
    float _weights;
}


@property (readonly, nonatomic) *float averagePixelTable;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *float nitsTable;
@property (readonly, nonatomic) *float rgbWeights;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger tableSize;


-(id)initWithConstraints:(struct AveragePixelConstraints *)arg0 ;
-(void)dealloc;


@end


#endif