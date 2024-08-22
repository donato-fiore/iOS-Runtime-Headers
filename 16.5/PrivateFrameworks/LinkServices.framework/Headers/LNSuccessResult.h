// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LNSUCCESSRESULT_H
#define LNSUCCESSRESULT_H

@class LNAction, NSData, NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "LNActionAppContext.h"
#import "LNActionOutput.h"

@interface LNSuccessResult : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) LNAction *action; // ivar: _action
@property (readonly, copy, nonatomic) LNActionAppContext *actionAppContext; // ivar: _actionAppContext
@property (readonly, copy, nonatomic) NSData *actionData; // ivar: _actionData
@property (readonly, copy, nonatomic) NSData *appContextData; // ivar: _appContextData
@property (readonly, copy, nonatomic) LNActionOutput *output; // ivar: _output
@property (readonly, copy, nonatomic) NSData *outputData; // ivar: _outputData
@property (readonly, copy, nonatomic) NSArray *predictions; // ivar: _predictions
@property (readonly, copy, nonatomic) NSData *predictionsData; // ivar: _predictionsData


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithAction:(id)arg0 output:(id)arg1 actionAppContext:(id)arg2 predictions:(id)arg3 ;
-(id)initWithActionData:(id)arg0 outputData:(id)arg1 appContextData:(id)arg2 predictionsData:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)verboseDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif