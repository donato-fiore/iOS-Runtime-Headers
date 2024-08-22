// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPREMOTECOMMANDHANDLERDIALOG_H
#define MPREMOTECOMMANDHANDLERDIALOG_H

@class NSArray, NSString, MRSendCommandHandlerDialog;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MPRemoteCommandHandlerDialog : NSObject <NSCopying>



@property (readonly, nonatomic) NSArray *actions;
@property (copy, nonatomic) NSString *localizedMessage;
@property (copy, nonatomic) NSString *localizedTitle;
@property (readonly, copy, nonatomic) MRSendCommandHandlerDialog *mediaRemoteType; // ivar: _mediaRemoteType


+(id)dialogWithTitle:(id)arg0 message:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithMediaRemoteType:(id)arg0 ;
-(void)addAction:(id)arg0 ;


@end


#endif