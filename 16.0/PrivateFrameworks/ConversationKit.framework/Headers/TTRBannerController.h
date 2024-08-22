// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TTRBANNERCONTROLLER_H
#define TTRBANNERCONTROLLER_H

@protocol TTRBannerControllerDelegate;

#import <Foundation/Foundation.h>


@interface TTRBannerController : NSObject {
    ? TTRBannerViewController;
}


@property (nonatomic, weak) NSObject<TTRBannerControllerDelegate> *delegate; // ivar: delegate


-(id)init;
-(void)buildTTRMessageBubbleRecipientsListWithGroupMessageUUID:(id)arg0 with:(id)arg1 ;
-(void)showTTRBanner;


@end


#endif