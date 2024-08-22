// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKCOMPLICATIONCONTROLLERCACHE_H
#define NTKCOMPLICATIONCONTROLLERCACHE_H

@class NSMutableDictionary, NSMapTable, NSString;
@protocol NTKFaceObserver, NTKFaceCollectionObserver;

#import <Foundation/Foundation.h>

#import "NTKFaceCollection.h"

@interface NTKComplicationControllerCache : NSObject <NTKFaceObserver, NTKFaceCollectionObserver>

 {
    NSMutableDictionary *_controllers;
    NSMutableDictionary *_controllersToOwningFace;
    NSMapTable *_faceToLegacyControllers;
    NTKFaceCollection *_libraryCollection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedCache;
-(id)controllerForComplication:(id)arg0 family:(NSInteger)arg1 face:(id)arg2 create:(id)arg3 ;
-(id)init;
-(id)legacyControllerForComplication:(id)arg0 face:(id)arg1 slot:(id)arg2 create:(id)arg3 ;
-(void)_addComplicationsForFace:(id)arg0 ;
-(void)_purge;
-(void)_removeComplicationsForFace:(id)arg0 ;
-(void)_updateComplicationsForFace:(id)arg0 ;
-(void)dealloc;
-(void)faceCollection:(id)arg0 didAddFace:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)faceCollection:(id)arg0 didRemoveFace:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)faceCollectionDidLoad:(id)arg0 ;
-(void)faceConfigurationDidChange:(id)arg0 ;
-(void)setLibraryCollection:(id)arg0 ;


@end


#endif