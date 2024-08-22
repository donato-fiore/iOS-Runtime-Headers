// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PISCALARKEYFRAME_H
#define PISCALARKEYFRAME_H

@class NSString, NSDictionary;
@protocol PIDictionaryRepresentable;

#import <Foundation/Foundation.h>


@interface PIScalarKeyframe : NSObject <PIDictionaryRepresentable>

 {
    CGFloat _value;
    ? _time;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)keyframeInArray:(id)arg0 closestToTime:(struct ? )arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithTime:(struct ? )arg0 value:(CGFloat)arg1 ;
-(void)nu_updateDigest:(id)arg0 ;


@end


#endif