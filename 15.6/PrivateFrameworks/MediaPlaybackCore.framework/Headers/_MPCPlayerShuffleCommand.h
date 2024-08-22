// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MPCPLAYERSHUFFLECOMMAND_H
#define _MPCPLAYERSHUFFLECOMMAND_H

@class MPCPlayerCommand, NSString, NSArray;
@protocol MPCPlayerShuffleCommand;



@interface _MPCPlayerShuffleCommand : MPCPlayerCommand <MPCPlayerShuffleCommand>



@property (nonatomic) NSInteger currentShuffleType; // ivar: _currentShuffleType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *supportedShuffleTypes; // ivar: _supportedShuffleTypes
@property (nonatomic) BOOL supportsAdvanceShuffle; // ivar: _supportsAdvanceShuffle
@property (nonatomic) BOOL supportsChangeShuffle; // ivar: _supportsChangeShuffle


-(id)advance;
-(id)setShuffleType:(NSInteger)arg0 ;


@end


#endif