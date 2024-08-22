// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSDEALLOCNOTIFIER_H
#define CLSDEALLOCNOTIFIER_H


#import <Foundation/Foundation.h>


@interface CLSDeallocNotifier : NSObject {
    id *_block;
}




-(id)initWithDeallocCallbackBlock:(id)arg0 ;
-(void)dealloc;


@end


#endif