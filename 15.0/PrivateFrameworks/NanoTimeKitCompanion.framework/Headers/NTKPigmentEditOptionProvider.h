// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKPIGMENTEDITOPTIONPROVIDER_H
#define NTKPIGMENTEDITOPTIONPROVIDER_H

@class NSBundle, NSString;
@protocol NTKPigmentEditOptionStoreListener;

#import <Foundation/Foundation.h>

#import "NTKPigmentEditOptionStore.h"
#import "NTKFace.h"

@interface NTKPigmentEditOptionProvider : NSObject <NTKPigmentEditOptionStoreListener>

 {
    NSBundle *_bundle;
    NSString *_domain;
    NTKPigmentEditOptionStore *_store;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NTKFace *face; // ivar: _face
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)hasAddableCollectionsForSlot:(id)arg0 ;
-(NSUInteger)indexOfOption:(id)arg0 slot:(id)arg1 ;
-(NSUInteger)numberOfOptionsForSlot:(id)arg0 ;
-(id)availableColorsForSlot:(id)arg0 ;
-(id)defaultColorOptionForSlot:(id)arg0 ;
-(id)fulfilledOptionForOption:(id)arg0 slot:(id)arg1 ;
-(id)initWithDomain:(id)arg0 bundle:(id)arg1 ;
-(id)initWithFace:(id)arg0 ;
-(id)migratedOptionForInvalidOption:(id)arg0 slot:(id)arg1 ;
-(id)optionAtIndex:(NSUInteger)arg0 slot:(id)arg1 ;
-(void)colorEditOptionStore:(id)arg0 didChangeForDomain:(id)arg1 ;
-(void)dealloc;


@end


#endif