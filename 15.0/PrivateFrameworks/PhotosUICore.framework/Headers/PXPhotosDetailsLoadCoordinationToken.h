// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXPHOTOSDETAILSLOADCOORDINATIONTOKEN_H
#define PXPHOTOSDETAILSLOADCOORDINATIONTOKEN_H


#import <Foundation/Foundation.h>

#import "PXPhotosDetailsLoadCoordinator.h"

@interface PXPhotosDetailsLoadCoordinationToken : NSObject {
    BOOL _didComplete;
}


@property (readonly, weak, nonatomic) PXPhotosDetailsLoadCoordinator *_loadCoordinator; // ivar: __loadCoordinator


-(id)_initWithLoadCoordinator:(id)arg0 ;
-(id)init;
-(void)_timeout;
-(void)complete;
-(void)dealloc;


@end


#endif