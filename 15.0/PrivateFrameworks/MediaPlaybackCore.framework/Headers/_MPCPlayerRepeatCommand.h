// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MPCPLAYERREPEATCOMMAND_H
#define _MPCPLAYERREPEATCOMMAND_H

@class MPCPlayerCommand, NSString, NSArray;
@protocol MPCPlayerRepeatCommand;



@interface _MPCPlayerRepeatCommand : MPCPlayerCommand <MPCPlayerRepeatCommand>



@property (nonatomic) NSInteger currentRepeatType; // ivar: _currentRepeatType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *supportedRepeatTypes; // ivar: _supportedRepeatTypes
@property (nonatomic) BOOL supportsAdvanceRepeat; // ivar: _supportsAdvanceRepeat
@property (nonatomic) BOOL supportsChangeRepeat; // ivar: _supportsChangeRepeat


-(id)advance;
-(id)setRepeatType:(NSInteger)arg0 ;


@end


#endif