// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SVXREMOTEEXPRESSIONPARSINGSERVICE_H
#define _SVXREMOTEEXPRESSIONPARSINGSERVICE_H

@class NSString;
@protocol SVXExpressionParsingServing, SVXAceCommandHandling;

#import <Foundation/Foundation.h>


@interface _SVXRemoteExpressionParsingService : NSObject <SVXExpressionParsingServing>



@property (retain, nonatomic) NSObject<SVXAceCommandHandling> *aceHandler; // ivar: _aceHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithAceHandler:(id)arg0 ;
-(void)parseExpressions:(id)arg0 targetDevice:(id)arg1 reply:(id)arg2 ;


@end


#endif