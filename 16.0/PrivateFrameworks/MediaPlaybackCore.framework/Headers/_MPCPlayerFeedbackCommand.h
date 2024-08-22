// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MPCPLAYERFEEDBACKCOMMAND_H
#define _MPCPLAYERFEEDBACKCOMMAND_H

@class MPCPlayerItemCommand, NSString;
@protocol MPCPlayerFeedbackCommand;



@interface _MPCPlayerFeedbackCommand : MPCPlayerItemCommand <MPCPlayerFeedbackCommand>



@property (readonly, nonatomic) unsigned int command; // ivar: _command
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *localizedShortTitle; // ivar: _localizedShortTitle
@property (copy, nonatomic) NSString *localizedTitle; // ivar: _localizedTitle
@property (nonatomic) NSInteger presentationStyle; // ivar: _presentationStyle
@property (readonly) Class superclass;
@property (nonatomic) BOOL value; // ivar: _value


-(id)changeValue:(BOOL)arg0 ;
-(id)initWithResponse:(id)arg0 mediaRemoteCommand:(unsigned int)arg1 ;


@end


#endif