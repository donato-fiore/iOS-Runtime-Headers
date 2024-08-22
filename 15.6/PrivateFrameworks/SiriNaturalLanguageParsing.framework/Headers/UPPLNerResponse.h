// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UPPLNERRESPONSE_H
#define UPPLNERRESPONSE_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface UPPLNerResponse : NSObject

@property (readonly, nonatomic) NSArray *alternativePredictions; // ivar: _alternativePredictions


-(id)dictionaryRepresentation;
-(id)initWithAlternativePredictions:(id)arg0 ;
-(id)spans;


@end


#endif