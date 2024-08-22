// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPMODELLIBRARYFAVORITEENTITYCHANGEREQUEST_H
#define MPMODELLIBRARYFAVORITEENTITYCHANGEREQUEST_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "MPModelObject.h"
#import "MPModelLibraryFavoriteEntityRequestAction.h"

@interface MPModelLibraryFavoriteEntityChangeRequest : NSObject <NSCopying>



@property (nonatomic) BOOL isFavorite; // ivar: _isFavorite
@property (retain, nonatomic) MPModelObject *modelObject; // ivar: _modelObject
@property (retain, nonatomic) MPModelLibraryFavoriteEntityRequestAction *requestAction; // ivar: _requestAction


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)newOperationWithResponseHandler:(id)arg0 ;


@end


#endif