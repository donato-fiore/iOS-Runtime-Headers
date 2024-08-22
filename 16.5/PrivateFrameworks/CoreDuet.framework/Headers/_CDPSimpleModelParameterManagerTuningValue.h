// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CDPSIMPLEMODELPARAMETERMANAGERTUNINGVALUE_H
#define _CDPSIMPLEMODELPARAMETERMANAGERTUNINGVALUE_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _CDPSimpleModelParameterManagerTuningValue : NSObject <NSSecureCoding>



@property (readonly, nonatomic) float lambda; // ivar: _lambda
@property (readonly, nonatomic) float score; // ivar: _score
@property (readonly, nonatomic) float threshold; // ivar: _threshold
@property (readonly, nonatomic) float w0; // ivar: _w0


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLambda:(float)arg0 w0:(float)arg1 threshold:(float)arg2 score:(float)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif