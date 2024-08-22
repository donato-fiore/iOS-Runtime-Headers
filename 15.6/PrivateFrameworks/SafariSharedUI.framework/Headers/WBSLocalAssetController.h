// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSLOCALASSETCONTROLLER_H
#define WBSLOCALASSETCONTROLLER_H

@class NSURL, NSDate;
@protocol WBSMobileAssetControllerProtocol, OS_dispatch_queue, WBSMobileAssetControllerDelegate;

#import <Foundation/Foundation.h>


@interface WBSLocalAssetController : NSObject <WBSMobileAssetControllerProtocol>

 {
    NSURL *_url;
    NSObject<OS_dispatch_queue> *_queue;
    id<WBSMobileAssetControllerDelegate> *_delegate;
}


@property (weak) NSObject<WBSMobileAssetControllerDelegate> *delegate;
@property (retain, nonatomic) NSDate *lastUpdateDate;
@property (readonly, nonatomic) CGFloat updateInterval;


-(id)initWithURL:(id)arg0 ;
-(void)queryURL:(id)arg0 ;


@end


#endif