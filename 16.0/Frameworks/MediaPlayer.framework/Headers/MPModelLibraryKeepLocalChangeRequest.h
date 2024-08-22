// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPMODELLIBRARYKEEPLOCALCHANGEREQUEST_H
#define MPMODELLIBRARYKEEPLOCALCHANGEREQUEST_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "MPModelObject.h"

@interface MPModelLibraryKeepLocalChangeRequest : NSObject <NSCopying>



@property (nonatomic) NSUInteger constraints; // ivar: _constraints
@property (nonatomic) NSInteger enableState; // ivar: _enableState
@property (retain, nonatomic) MPModelObject *modelObject; // ivar: _modelObject


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)newOperationWithResponseHandler:(id)arg0 ;


@end


#endif