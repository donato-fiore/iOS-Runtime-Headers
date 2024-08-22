// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIMEDIALIBRARYINTERFACE_H
#define SKUIMEDIALIBRARYINTERFACE_H

@class NSString;
@protocol SKUILibraryInterface;

#import <Foundation/Foundation.h>


@interface SKUIMediaLibraryInterface : NSObject <SKUILibraryInterface>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isItemLocalAudiobook:(id)arg0 ;
-(BOOL)performActionForLibraryItem:(id)arg0 ;
-(NSInteger)_availabilityForMediaItem:(id)arg0 ;
-(NSUInteger)_AVTypesForMediaItem:(id)arg0 ;
-(id)_newDefaultQuery;
-(id)_storePlatformKindForMediaItem:(id)arg0 ;
-(id)exposedPlatformItemKinds;
-(id)stateForLibraryItem:(id)arg0 ;
-(void)_restrictQueryToLocalContent:(id)arg0 ;
-(void)enumerateStatesForLibraryItems:(id)arg0 usingBlock:(id)arg1 ;
-(void)removeMediaItemsForLibraryItems:(id)arg0 ;


@end


#endif