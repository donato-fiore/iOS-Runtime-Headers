// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKIMPORTSTATUSMANAGER_H
#define CKIMPORTSTATUSMANAGER_H

@class NSString;
@protocol PXAssetImportStatusManager;

#import <Foundation/Foundation.h>


@interface CKImportStatusManager : NSObject <PXAssetImportStatusManager>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)importStateForAsset:(id)arg0 ;
-(void)addAssetImportStatusObserver:(id)arg0 ;
-(void)removeAssetImportStatusObserver:(id)arg0 ;


@end


#endif