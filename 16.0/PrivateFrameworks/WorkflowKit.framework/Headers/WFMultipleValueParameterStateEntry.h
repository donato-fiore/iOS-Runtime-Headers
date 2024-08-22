// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFMULTIPLEVALUEPARAMETERSTATEENTRY_H
#define WFMULTIPLEVALUEPARAMETERSTATEENTRY_H

@class NSUUID;
@protocol WFParameterState;

#import <Foundation/Foundation.h>


@interface WFMultipleValueParameterStateEntry : NSObject

@property (readonly, nonatomic) NSUUID *identity; // ivar: _identity
@property (readonly, nonatomic) NSObject<WFParameterState> *parameterState; // ivar: _parameterState


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithIdentity:(id)arg0 parameterState:(id)arg1 ;


@end


#endif