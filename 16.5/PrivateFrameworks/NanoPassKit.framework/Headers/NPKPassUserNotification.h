// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPKPASSUSERNOTIFICATION_H
#define NPKPASSUSERNOTIFICATION_H

@class NSArray, PKPass;


#import "NPKUserNotification.h"

@interface NPKPassUserNotification : NPKUserNotification

@property (readonly, nonatomic) NSArray *identifierHashComponents;
@property (readonly, nonatomic) PKPass *pass; // ivar: _pass


-(id)initWithPass:(id)arg0 ;


@end


#endif