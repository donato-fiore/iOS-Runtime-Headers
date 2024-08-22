// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFTOASTMANAGER_H
#define WFTOASTMANAGER_H

@class WFSessionKitAssertion;
@protocol WFToastManagerDelegate;

#import <Foundation/Foundation.h>


@interface WFToastManager : NSObject {
    ? _toastedSession;
    ? transaction;
    ? lock;
}


@property (nonatomic, weak) NSObject<WFToastManagerDelegate> *delegate; // ivar: delegate
@property (nonatomic, readonly) WFSessionKitAssertion *toastedSession;


-(BOOL)toastWithSessionWithIdentifier:(id)arg0 ;
-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(void)eatTheToast;


@end


#endif