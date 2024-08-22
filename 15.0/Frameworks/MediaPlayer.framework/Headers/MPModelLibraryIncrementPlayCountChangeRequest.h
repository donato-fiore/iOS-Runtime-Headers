// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPMODELLIBRARYINCREMENTPLAYCOUNTCHANGEREQUEST_H
#define MPMODELLIBRARYINCREMENTPLAYCOUNTCHANGEREQUEST_H


#import <Foundation/Foundation.h>

#import "MPMediaLibrary.h"
#import "MPModelObject.h"

@interface MPModelLibraryIncrementPlayCountChangeRequest : NSObject

@property (retain, nonatomic) MPMediaLibrary *mediaLibrary; // ivar: _mediaLibrary
@property (readonly, nonatomic) MPModelObject *model; // ivar: _model


-(id)initWithModel:(id)arg0 ;
-(id)newOperationWithResponseHandler:(id)arg0 ;


@end


#endif