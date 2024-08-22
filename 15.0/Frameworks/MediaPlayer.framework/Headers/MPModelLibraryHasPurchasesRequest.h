// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPMODELLIBRARYHASPURCHASESREQUEST_H
#define MPMODELLIBRARYHASPURCHASESREQUEST_H


#import <Foundation/Foundation.h>

#import "MPModelKind.h"
#import "MPMediaLibrary.h"
#import "MPModelObject.h"

@interface MPModelLibraryHasPurchasesRequest : NSObject

@property (retain, nonatomic) MPModelKind *itemKind; // ivar: _itemKind
@property (retain, nonatomic) MPMediaLibrary *mediaLibrary; // ivar: _mediaLibrary
@property (retain, nonatomic) MPModelObject *modelObject; // ivar: _modelObject


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)newOperationWithResponseHandler:(id)arg0 ;


@end


#endif