// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRUIMAGELOADERCOORDINATOR_H
#define MRUIMAGELOADERCOORDINATOR_H

@class NSHashTable, NSSet;

#import <Foundation/Foundation.h>


@interface MRUImageLoaderCoordinator : NSObject

@property (readonly, nonatomic) NSHashTable *loaders; // ivar: _loaders
@property (retain, nonatomic) NSSet *registeredLoaderArtworkIdentifiers; // ivar: _registeredLoaderArtworkIdentifiers
@property (nonatomic) CGSize requestSize; // ivar: _requestSize


+(id)sharedCoordinator;
-(id)init;
-(void)recalculateArtworkIdentifiers;
-(void)recalculateRequestSize;
-(void)registerLoader:(id)arg0 ;
-(void)registeredLoaderArtworkIdentifierDidChange:(id)arg0 ;
-(void)registeredLoaderFittingSizeDidChange:(id)arg0 ;
-(void)unregisterLoader:(id)arg0 ;


@end


#endif