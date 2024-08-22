// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UISCURRENTUSERINTERFACESTYLEVALUE_H
#define UISCURRENTUSERINTERFACESTYLEVALUE_H


#import <Foundation/Foundation.h>


@interface UISCurrentUserInterfaceStyleValue : NSObject {
    int _notificationToken;
}


@property (readonly, nonatomic) NSInteger userInterfaceStyle;


-(id)init;
-(id)initWithChangesDeliveredOnQueue:(id)arg0 toBlock:(id)arg1 ;
-(void)dealloc;


@end


#endif