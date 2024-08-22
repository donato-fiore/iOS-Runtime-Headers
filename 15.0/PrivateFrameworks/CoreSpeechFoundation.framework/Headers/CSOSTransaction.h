// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSOSTRANSACTION_H
#define CSOSTRANSACTION_H

@class NSString;
@protocol OS_os_transaction;

#import <Foundation/Foundation.h>


@interface CSOSTransaction : NSObject {
    NSObject<OS_os_transaction> *_transaction;
    NSString *_description;
}




-(id)initWithDescription:(id)arg0 ;
-(void)dealloc;


@end


#endif