// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUPURGEABLESTORAGEFACTORY_H
#define NUPURGEABLESTORAGEFACTORY_H

@class NSString;
@protocol NUStorageFactory;

#import <Foundation/Foundation.h>

#import "NUPurgeableStoragePool.h"

@interface NUPurgeableStorageFactory : NSObject <NUStorageFactory>

 {
    Class _storageClass;
    NUPurgeableStoragePool *_storagePool;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithStorageClass:(Class)arg0 ;
-(id)initWithStorageClass:(Class)arg0 storagePool:(id)arg1 ;
-(id)initWithStoragePool:(id)arg0 ;
-(id)newStorageWithSize:(struct ? )arg0 format:(id)arg1 ;
-(void)returnStorage:(id)arg0 ;


@end


#endif