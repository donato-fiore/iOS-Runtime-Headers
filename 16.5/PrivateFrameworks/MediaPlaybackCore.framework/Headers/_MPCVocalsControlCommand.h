// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MPCVOCALSCONTROLCOMMAND_H
#define _MPCVOCALSCONTROLCOMMAND_H

@class MPCPlayerCommand, NSString;
@protocol MPCVocalsControlCommand;



@interface _MPCVocalsControlCommand : MPCPlayerCommand <MPCVocalsControlCommand>



@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (nonatomic, getter=isContinuous) BOOL continuous; // ivar: _continuous
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDisabled) BOOL disabled; // ivar: _disabled
@property (nonatomic) NSInteger disabledReason; // ivar: _disabledReason
@property (readonly) NSUInteger hash;
@property (nonatomic) float level; // ivar: _level
@property (nonatomic) float maxLevel; // ivar: _maxLevel
@property (nonatomic) float minLevel; // ivar: _minLevel
@property (readonly) Class superclass;


-(id)activateVocalsControl:(BOOL)arg0 ;
-(id)setVocalsLevel:(float)arg0 ;


@end


#endif