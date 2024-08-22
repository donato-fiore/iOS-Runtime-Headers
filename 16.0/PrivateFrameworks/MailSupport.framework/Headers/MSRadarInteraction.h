// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSRADARINTERACTION_H
#define MSRADARINTERACTION_H

@class NSString, UIAlertController, NSURL;

#import <Foundation/Foundation.h>


@interface MSRadarInteraction : NSObject

@property (copy, nonatomic) NSString *cancelButtonTitle; // ivar: _cancelButtonTitle
@property (copy, nonatomic) id *cancelHandler; // ivar: _cancelHandler
@property (readonly, nonatomic) UIAlertController *interactionViewController;
@property (copy, nonatomic) NSString *maybeLaterButtonTitle; // ivar: _maybeLaterButtonTitle
@property (copy, nonatomic) id *maybeLaterHandler; // ivar: _maybeLaterHandler
@property (readonly, nonatomic) NSString *message; // ivar: _message
@property (copy, nonatomic) NSString *openButtonTitle; // ivar: _openButtonTitle
@property (copy, nonatomic) id *openHandler; // ivar: _openHandler
@property (readonly, nonatomic) NSURL *radarURL; // ivar: _radarURL
@property (readonly, nonatomic) NSString *title; // ivar: _title


+(id)interactionWithTitle:(id)arg0 message:(id)arg1 builder:(id)arg2 ;
+(id)interactionWithTitle:(id)arg0 message:(id)arg1 radarURL:(id)arg2 ;
-(id)initWithTitle:(id)arg0 message:(id)arg1 radarURL:(id)arg2 ;
-(void)promptToFile;


@end


#endif