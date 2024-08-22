// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBHICONMODELDESIREDICONSTATEUNARCHIVERDELEGATE_H
#define SBHICONMODELDESIREDICONSTATEUNARCHIVERDELEGATE_H

@class NSString;
@protocol SBHIconStateUnarchiverDelegate;

#import <Foundation/Foundation.h>


@interface SBHIconModelDesiredIconStateUnarchiverDelegate : NSObject <SBHIconStateUnarchiverDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)iconModel:(id)arg0 allowedGridSizeClassesForFolderClass:(Class)arg1 ;
-(NSUInteger)maxIconCountForDockForIconStateUnarchiver:(id)arg0 ;
-(NSUInteger)maxListCountForFoldersForIconStateUnarchiver:(id)arg0 ;
-(struct SBHIconGridSize )iconStateUnarchiver:(id)arg0 listGridSizeForFolderClass:(Class)arg1 ;
-(struct SBHIconGridSizeClassSizes )gridSizeClassSizesForIconStateUnarchiver:(id)arg0 ;


@end


#endif