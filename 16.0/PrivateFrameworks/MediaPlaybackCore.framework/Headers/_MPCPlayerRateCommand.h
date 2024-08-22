// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MPCPLAYERRATECOMMAND_H
#define _MPCPLAYERRATECOMMAND_H

@class MPCPlayerItemCommand, NSString;
@protocol MPCPlayerRateCommand;



@interface _MPCPlayerRateCommand : MPCPlayerItemCommand <MPCPlayerRateCommand>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) float maximumValue; // ivar: _maximumValue
@property (nonatomic) float minimumValue; // ivar: _minimumValue
@property (readonly) Class superclass;


-(id)changeValue:(float)arg0 ;


@end


#endif