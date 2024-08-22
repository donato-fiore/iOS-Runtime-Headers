// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCPLAYERCOMMANDDIALOG_H
#define MPCPLAYERCOMMANDDIALOG_H

@class MPRemoteCommandHandlerDialog, NSArray, NSString;

#import <Foundation/Foundation.h>


@interface MPCPlayerCommandDialog : NSObject {
    MPRemoteCommandHandlerDialog *_dialog;
}


@property (readonly, nonatomic) NSArray *actions; // ivar: _actions
@property (readonly, copy, nonatomic) NSString *localizedMessage;
@property (readonly, copy, nonatomic) NSString *localizedTitle;


-(id)description;
-(id)initWithMPDialog:(id)arg0 request:(id)arg1 ;


@end


#endif