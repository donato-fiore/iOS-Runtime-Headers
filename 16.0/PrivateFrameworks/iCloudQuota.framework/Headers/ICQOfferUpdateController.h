// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICQOFFERUPDATECONTROLLER_H
#define ICQOFFERUPDATECONTROLLER_H

@class NSURLSession;

#import <Foundation/Foundation.h>


@interface ICQOfferUpdateController : NSObject {
    NSURLSession *_sharedURLSession;
}




-(id)initWithSession:(id)arg0 ;
-(void)performOfferUpdateWithContext:(id)arg0 completion:(id)arg1 ;


@end


#endif