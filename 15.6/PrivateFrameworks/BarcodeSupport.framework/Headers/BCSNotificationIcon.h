// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BCSNOTIFICATIONICON_H
#define BCSNOTIFICATIONICON_H

@class NSURL;
@protocol BCSAction;

#import <Foundation/Foundation.h>


@interface BCSNotificationIcon : NSObject {
    id<BCSAction> *_action;
}


@property (readonly, copy, nonatomic) NSURL *imageURL;


+(id)nfcIcon;
+(id)qrCodeIcon;
+(id)viewfinderIcon;
-(id)_clipIconURLForAction:(id)arg0 scale:(CGFloat)arg1 ;
-(id)_notificationIconDataURLForApp:(id)arg0 scale:(float)arg1 ;
-(id)initWithAction:(id)arg0 ;


@end


#endif