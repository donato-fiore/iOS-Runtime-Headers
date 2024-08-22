// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MNVIRTUALGARAGESTANDARDPROVIDER_H
#define MNVIRTUALGARAGESTANDARDPROVIDER_H

@class NSString;
@protocol VGVirtualGarageObserver, MNVirtualGarageProvider, MNVirtualGarageProviderDelegate;

#import <Foundation/Foundation.h>


@interface MNVirtualGarageStandardProvider : NSObject <VGVirtualGarageObserver, MNVirtualGarageProvider>

 {
    BOOL _isStarted;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<MNVirtualGarageProviderDelegate> *virtualGarageDelegate; // ivar: _delegate


-(void)dealloc;
-(void)startVirtualGarageUpdates;
-(void)stopVirtualGarageUpdates;
-(void)virtualGarageDidUpdate:(id)arg0 ;


@end


#endif