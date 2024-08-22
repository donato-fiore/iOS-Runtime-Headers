// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CSQUERYTOKENVARIATION_H
#define _CSQUERYTOKENVARIATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _CSQueryTokenVariation : NSObject

@property (nonatomic) float confidence; // ivar: _confidence
@property (nonatomic) NSInteger type; // ivar: _type
@property (readonly, copy, nonatomic) NSString *variation; // ivar: _variation


-(id)initWithVariation:(id)arg0 type:(NSInteger)arg1 confidence:(float)arg2 ;


@end


#endif