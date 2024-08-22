// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UISAVETOCAMERAROLLSAVEITEMSCONTROLLER_H
#define _UISAVETOCAMERAROLLSAVEITEMSCONTROLLER_H

@class NSError, NSArray;

#import <Foundation/Foundation.h>


@interface _UISaveToCameraRollSaveItemsController : NSObject

@property (readonly, nonatomic) NSError *errorToReport; // ivar: _errorToReport
@property (readonly, nonatomic) NSArray *itemsToSchedule; // ivar: _itemsToSchedule
@property (readonly, nonatomic) NSInteger pendingSaveCount; // ivar: _pendingSaveCount
@property (readonly, nonatomic) id *saveCompletionBlock; // ivar: _saveCompletionBlock
@property (readonly, nonatomic) BOOL successToReport; // ivar: _successToReport


-(id)initWithItems:(id)arg0 saveCompletionBlock:(id)arg1 ;
-(void)_didCompleteSavingItem:(id)arg0 error:(id)arg1 contextInfo:(*void)arg2 ;
-(void)_invokeSaveCompletionBlock;
-(void)_noteDidCompleteSavingItem:(id)arg0 error:(id)arg1 ;
-(void)_saveImage:(id)arg0 ;
-(void)_saveImageData:(id)arg0 ;
-(void)_saveVideoAtPath:(id)arg0 ;
-(void)beginSaving;
-(void)beginSavingItem:(id)arg0 ;


@end


#endif