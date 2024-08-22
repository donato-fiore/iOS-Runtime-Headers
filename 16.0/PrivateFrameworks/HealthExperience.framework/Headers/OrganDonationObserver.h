// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ORGANDONATIONOBSERVER_H
#define ORGANDONATIONOBSERVER_H

@protocol OrganDonationObserverDelegate;

#import <Foundation/Foundation.h>


@interface OrganDonationObserver : NSObject {
    int _organDonationChangedToken;
}


@property (weak, nonatomic) NSObject<OrganDonationObserverDelegate> *delegate; // ivar: _delegate


-(id)init;
-(void)dealloc;
-(void)startObservingChanges;


@end


#endif