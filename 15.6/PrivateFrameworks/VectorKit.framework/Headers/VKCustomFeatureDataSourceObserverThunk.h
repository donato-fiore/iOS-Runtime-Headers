// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VKCUSTOMFEATUREDATASOURCEOBSERVERTHUNK_H
#define VKCUSTOMFEATUREDATASOURCEOBSERVERTHUNK_H

@class NSString;
@protocol VKCustomFeatureDataSourceObserver;

#import <Foundation/Foundation.h>


@interface VKCustomFeatureDataSourceObserverThunk : NSObject <VKCustomFeatureDataSourceObserver>

 {
    *void _observer;
    _retain_ptr<id<VKCustomFeatureDataSource>, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> _dataSource;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDataSource:(id)arg0 observer:(*void)arg1 ;
-(void)clearObserver;
-(void)dataSource:(id)arg0 didChangeSceneID:(unsigned char)arg1 ;
-(void)dataSource:(id)arg0 didChangeSceneState:(unsigned char)arg1 ;
-(void)dataSource:(id)arg0 featuresDidChangeForRect:(struct ? )arg1 ;
-(void)dealloc;
-(void)globalFeaturesDidChangeForDataSource:(id)arg0 ;


@end


#endif