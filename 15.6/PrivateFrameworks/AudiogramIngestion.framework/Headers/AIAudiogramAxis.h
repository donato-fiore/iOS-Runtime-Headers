// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AIAUDIOGRAMAXIS_H
#define AIAUDIOGRAMAXIS_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "AIRecognizedText.h"

@interface AIAudiogramAxis : NSObject

@property (nonatomic) NSUInteger axis; // ivar: _axis
@property (readonly, nonatomic) AIRecognizedText *maxValue;
@property (readonly, nonatomic) AIRecognizedText *minValue;
@property (retain, nonatomic) NSArray *values; // ivar: _values


-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithAxis:(NSUInteger)arg0 values:(id)arg1 ;


@end


#endif