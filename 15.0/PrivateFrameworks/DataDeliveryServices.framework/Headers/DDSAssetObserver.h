// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DDSASSETOBSERVER_H
#define DDSASSETOBSERVER_H

@class NSString, NSSet;
@protocol DDSAssetObserving, DDSAssetObservingDelegate;

#import <Foundation/Foundation.h>


@interface DDSAssetObserver : NSObject <DDSAssetObserving>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<DDSAssetObservingDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSSet *typesToObserve; // ivar: _typesToObserve


-(void)beginObservingTypes:(id)arg0 ;
-(void)dealloc;
-(void)endObservingTypes:(id)arg0 ;
-(void)notifyObserversAssetsUpdatedForType:(id)arg0 ;
-(void)observeAssetTypes:(id)arg0 ;


@end


#endif