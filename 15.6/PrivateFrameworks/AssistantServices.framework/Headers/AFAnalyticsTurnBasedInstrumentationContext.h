// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFANALYTICSTURNBASEDINSTRUMENTATIONCONTEXT_H
#define AFANALYTICSTURNBASEDINSTRUMENTATIONCONTEXT_H

@class NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SISchemaClientTurnContext.h"

@interface AFAnalyticsTurnBasedInstrumentationContext : NSObject <NSSecureCoding>

 {
    NSUUID *_turnIdentifier;
    SISchemaClientTurnContext *_turnContext;
}


@property (readonly, nonatomic) NSUUID *turnIdentifier;


+(BOOL)supportsSecureCoding;
+(id)newTurnBasedContextWithPreviousTurnID:(id)arg0 ;
+(id)newTurnBasedContextWithPreviousTurnID:(id)arg0 analytics:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTurnIdentifier:(id)arg0 ;
-(id)nextTurnBasedContext;
-(id)nextTurnBasedContextForAnalytics:(id)arg0 ;
-(void)emitInstrumentation:(id)arg0 ;
-(void)emitInstrumentation:(id)arg0 machAbsoluteTime:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif