// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLSIMPLEALBUMLIST_H
#define PLSIMPLEALBUMLIST_H

@class NSOrderedSet, NSString;
@protocol PLAssetContainerList;

#import <Foundation/Foundation.h>


@interface PLSimpleAlbumList : NSObject <PLAssetContainerList>



@property (retain, nonatomic) NSOrderedSet *containers; // ivar: _containers
@property (readonly, nonatomic) NSUInteger containersCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canEditContainers;
-(BOOL)isEmpty;
-(id)initWithAssetContainer:(id)arg0 ;
-(id)managedObjectContext;
-(id)photoLibrary;


@end


#endif