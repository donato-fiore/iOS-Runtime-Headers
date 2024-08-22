// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ESUSERNOTIFICATIONINFO_H
#define ESUSERNOTIFICATIONINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ESUserNotificationInfo : NSObject {
    id *_handler;
}


@property (copy, nonatomic) NSString *groupIdentifier; // ivar: _groupIdentifier


-(id)handler:(SEL)arg0 ;
-(void)setHandler:(id)arg0 ;


@end


#endif