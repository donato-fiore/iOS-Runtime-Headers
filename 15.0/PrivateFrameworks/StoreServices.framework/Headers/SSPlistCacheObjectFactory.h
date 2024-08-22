// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSPLISTCACHEOBJECTFACTORY_H
#define SSPLISTCACHEOBJECTFACTORY_H

@class NSString;
@protocol SSCacheObjectFactory;

#import <Foundation/Foundation.h>


@interface SSPlistCacheObjectFactory : NSObject <SSCacheObjectFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)supportsTypeIdentifier:(id)arg0 ;
-(id)cachedObjectWithDataRepresentation:(id)arg0 typeIdentifier:(id)arg1 ;


@end


#endif