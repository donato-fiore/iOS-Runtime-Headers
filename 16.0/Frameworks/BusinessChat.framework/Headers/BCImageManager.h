// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BCIMAGEMANAGER_H
#define BCIMAGEMANAGER_H

@class NSString;
@protocol BCImageManagerProtocol, BCNetworkProviderProtocol;

#import <Foundation/Foundation.h>


@interface BCImageManager : NSObject <BCImageManagerProtocol>

 {
    id<BCNetworkProviderProtocol> *_networkProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)_fetchBrandIconDataForMapItem:(id)arg0 desiredSize:(struct CGSize )arg1 allowSmaller:(BOOL)arg2 completion:(id)arg3 ;
-(void)_fetchNavBarBrandIconDataForMapItem:(id)arg0 desiredSize:(struct CGSize )arg1 allowSmaller:(BOOL)arg2 completion:(id)arg3 ;
-(void)fetchBrandIconDataForMapItem:(id)arg0 desiredSize:(struct CGSize )arg1 allowSmaller:(BOOL)arg2 completion:(id)arg3 ;
-(void)fetchNavBarBrandIconDataForMapItem:(id)arg0 desiredSize:(struct CGSize )arg1 allowSmaller:(BOOL)arg2 completion:(id)arg3 ;


@end


#endif