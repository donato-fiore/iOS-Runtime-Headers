// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSCONCRETENOTIFICATION_H
#define NSCONCRETENOTIFICATION_H

@class NSDictionary;


#import "NSNotification.h"
#import "NSString.h"

@interface NSConcreteNotification : NSNotification {
    NSString *name;
    id *object;
    NSDictionary *userInfo;
}




-(id)initWithName:(id)arg0 object:(id)arg1 userInfo:(id)arg2 ;
-(id)name;
-(id)object;
-(id)userInfo;
-(void)dealloc;


@end


#endif