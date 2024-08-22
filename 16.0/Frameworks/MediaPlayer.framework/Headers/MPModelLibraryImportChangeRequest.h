// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPMODELLIBRARYIMPORTCHANGEREQUEST_H
#define MPMODELLIBRARYIMPORTCHANGEREQUEST_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "MPSectionedCollection.h"
#import "MPModelObject.h"

@interface MPModelLibraryImportChangeRequest : NSObject <NSCopying>



@property (copy, nonatomic) MPSectionedCollection *modelObjects; // ivar: _modelObjects
@property (copy, nonatomic) MPModelObject *referralObject; // ivar: _referralObject
@property (nonatomic) BOOL shouldLibraryAdd; // ivar: _shouldLibraryAdd


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)newOperationWithResponseHandler:(id)arg0 ;
-(void)performWithResponseHandler:(id)arg0 ;


@end


#endif