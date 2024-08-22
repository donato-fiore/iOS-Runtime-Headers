// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNSUCCESSRESULT_H
#define LNSUCCESSRESULT_H

@class LNAction, NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "LNActionAppContext.h"
#import "LNActionOutput.h"

@interface LNSuccessResult : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) LNAction *action; // ivar: _action
@property (readonly, copy, nonatomic) LNActionAppContext *actionAppContext; // ivar: _actionAppContext
@property (readonly, copy, nonatomic) LNActionOutput *output; // ivar: _output
@property (readonly, copy, nonatomic) NSArray *predictions; // ivar: _predictions


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithAction:(id)arg0 output:(id)arg1 actionAppContext:(id)arg2 predictions:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif