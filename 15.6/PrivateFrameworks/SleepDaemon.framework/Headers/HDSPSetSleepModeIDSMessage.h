// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSPSETSLEEPMODEIDSMESSAGE_H
#define HDSPSETSLEEPMODEIDSMESSAGE_H

@class NSString;
@protocol BSDescriptionProviding, HDSPIDSMessage;

#import <Foundation/Foundation.h>


@interface HDSPSetSleepModeIDSMessage : NSObject <BSDescriptionProviding, HDSPIDSMessage>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL sleepModeOn; // ivar: _sleepModeOn
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSleepModeOn:(BOOL)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif