// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPFEEDBACKCOMMAND_H
#define MPFEEDBACKCOMMAND_H

@class NSString;


#import "MPRemoteCommand.h"

@interface MPFeedbackCommand : MPRemoteCommand {
    NSInteger _presentationStyle;
}


@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (copy, nonatomic) NSString *localizedShortTitle; // ivar: _localizedShortTitle
@property (copy, nonatomic) NSString *localizedTitle; // ivar: _localizedTitle


-(NSInteger)presentationStyle;
-(id)_mediaRemoteCommandInfoOptions;
-(id)newCommandEventWithState:(NSInteger)arg0 ;
-(void)setPresentationStyle:(NSInteger)arg0 ;


@end


#endif