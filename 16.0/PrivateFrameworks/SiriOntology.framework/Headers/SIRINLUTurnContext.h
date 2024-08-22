// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRINLUTURNCONTEXT_H
#define SIRINLUTURNCONTEXT_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SIRINLULegacyNLContext.h"
#import "SIRINLUNLContext.h"

@interface SIRINLUTurnContext : NSObject <NSSecureCoding>



@property (retain, nonatomic) SIRINLULegacyNLContext *legacyNLContext; // ivar: _legacyNLContext
@property (retain, nonatomic) SIRINLULegacyNLContext *legacyNLContextNullable; // ivar: _legacyNLContextNullable
@property (retain, nonatomic) SIRINLUNLContext *nlContext; // ivar: _nlContext
@property (retain, nonatomic) SIRINLUNLContext *nlContextNullable; // ivar: _nlContextNullable


+(BOOL)supportsSecureCoding;
+(id)createEmptyPlaceholderLegacyNLContext;
+(id)createEmptyPlaceholderNLContext;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLegacyNLContext:(id)arg0 ;
-(id)initWithNLContext:(id)arg0 ;
-(id)initWithNLContext:(id)arg0 legacyNLContext:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif