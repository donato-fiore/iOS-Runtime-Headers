// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CDPSIMPLEMODELPARAMETERMANAGERACCOUNTSTATE_H
#define _CDPSIMPLEMODELPARAMETERMANAGERACCOUNTSTATE_H

@class NSMutableArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_CDPModelTuningState.h"
#import "_CDPSimpleModelParameterManagerTuningValue.h"

@interface _CDPSimpleModelParameterManagerAccountState : NSObject <NSSecureCoding>



@property (retain, nonatomic) _CDPModelTuningState *lastTuningState; // ivar: _lastTuningState
@property (retain, nonatomic) _CDPSimpleModelParameterManagerTuningValue *previousBestTuningValue; // ivar: _previousBestTuningValue
@property (retain, nonatomic) NSMutableArray *tuningValues; // ivar: _tuningValues


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif