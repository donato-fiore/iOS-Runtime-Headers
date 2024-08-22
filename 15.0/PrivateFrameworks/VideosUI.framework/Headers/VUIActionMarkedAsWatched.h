// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIACTIONMARKEDASWATCHED_H
#define VUIACTIONMARKEDASWATCHED_H

@class NSString;


#import "VUIAction.h"

@interface VUIActionMarkedAsWatched : VUIAction

@property (retain, nonatomic) NSString *adamID; // ivar: _adamID
@property (retain, nonatomic) NSString *channelID; // ivar: _channelID
@property (retain, nonatomic) NSString *itemID; // ivar: _itemID
@property (retain, nonatomic) NSString *itemType; // ivar: _itemType


-(id)initWithContextData:(id)arg0 ;
-(void)performWithTargetResponder:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif