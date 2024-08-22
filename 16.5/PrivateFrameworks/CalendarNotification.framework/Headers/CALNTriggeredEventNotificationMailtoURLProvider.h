// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALNTRIGGEREDEVENTNOTIFICATIONMAILTOURLPROVIDER_H
#define CALNTRIGGEREDEVENTNOTIFICATIONMAILTOURLPROVIDER_H

@protocol CALNMailAccounts;

#import <Foundation/Foundation.h>


@interface CALNTriggeredEventNotificationMailtoURLProvider : NSObject

@property (readonly, nonatomic) NSObject<CALNMailAccounts> *mailAccounts; // ivar: _mailAccounts


-(id)initWithMailAccounts:(id)arg0 ;
-(id)mailtoURLForEvent:(id)arg0 ;


@end


#endif