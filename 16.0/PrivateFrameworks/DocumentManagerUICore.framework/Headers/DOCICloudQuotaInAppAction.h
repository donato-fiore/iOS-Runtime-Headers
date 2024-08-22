// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DOCICLOUDQUOTAINAPPACTION_H
#define DOCICLOUDQUOTAINAPPACTION_H

@class ICQInAppAction, NSString;

#import <Foundation/Foundation.h>


@interface DOCICloudQuotaInAppAction : NSObject

@property (readonly, nonatomic) ICQInAppAction *action; // ivar: _action
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, copy, nonatomic) NSString *type; // ivar: _type


-(id)initWithICQInAppAction:(id)arg0 ;
-(id)initWithTitle:(id)arg0 type:(id)arg1 ;
-(void)performAction;


@end


#endif