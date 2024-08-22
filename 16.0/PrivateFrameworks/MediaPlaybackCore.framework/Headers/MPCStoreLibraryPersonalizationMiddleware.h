// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPCSTORELIBRARYPERSONALIZATIONMIDDLEWARE_H
#define MPCSTORELIBRARYPERSONALIZATIONMIDDLEWARE_H

@class NSString, NSArray, MPSectionedCollection;
@protocol MPCPlayerResponseBuilder, MPMiddleware;

#import <Foundation/Foundation.h>


@interface MPCStoreLibraryPersonalizationMiddleware : NSObject <MPCPlayerResponseBuilder, MPMiddleware>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *invalidationObservers; // ivar: _invalidationObservers
@property (retain, nonatomic) MPSectionedCollection *personalizedModelObjects; // ivar: _personalizedModelObjects
@property (readonly) Class superclass;
@property (readonly) Class superclass;


-(id)operationsForPlayerRequest:(id)arg0 ;
-(id)operationsForRequest:(id)arg0 ;
-(id)playerModelObject:(id)arg0 propertySet:(id)arg1 atIndexPath:(id)arg2 chain:(id)arg3 ;


@end


#endif