// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPMODELRESPONSE_H
#define MPMODELRESPONSE_H


#import <Foundation/Foundation.h>

#import "MPPropertySet.h"
#import "MPModelRequest.h"
#import "MPSectionedCollection.h"

@interface MPModelResponse : NSObject

@property (retain, nonatomic) MPPropertySet *deferredItemProperties; // ivar: _deferredItemProperties
@property (retain, nonatomic) MPPropertySet *deferredSectionProperties; // ivar: _deferredSectionProperties
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, copy, nonatomic) MPModelRequest *request; // ivar: _request
@property (copy, nonatomic) MPSectionedCollection *results; // ivar: _results
@property (readonly, nonatomic, getter=isValid) BOOL valid; // ivar: _valid


-(id)debugDescription;
-(id)description;
-(id)init;
-(id)initWithRequest:(id)arg0 ;
-(void)_invalidate;
-(void)getChangeDetailsFromPreviousResponse:(id)arg0 completion:(id)arg1 ;


@end


#endif