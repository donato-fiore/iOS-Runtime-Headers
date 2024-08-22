// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MPCPLAYERDISABLEMODIFICATIONSCOMMAND_H
#define _MPCPLAYERDISABLEMODIFICATIONSCOMMAND_H

@class MPCPlayerCommand, NSString;
@protocol MPCPlayerDisableModificationsCommand;



@interface _MPCPlayerDisableModificationsCommand : MPCPlayerCommand <MPCPlayerDisableModificationsCommand>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDisabled, setter=_setDisabled:) BOOL disabled; // ivar: _disabled
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)setDisabled:(BOOL)arg0 ;


@end


#endif