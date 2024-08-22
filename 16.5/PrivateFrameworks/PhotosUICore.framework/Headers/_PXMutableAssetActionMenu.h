// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PXMUTABLEASSETACTIONMENU_H
#define _PXMUTABLEASSETACTIONMENU_H

@class NSString, NSMutableArray, NSArray;
@protocol PXMutableAssetActionMenu;

#import <Foundation/Foundation.h>


@interface _PXMutableAssetActionMenu : NSObject <PXMutableAssetActionMenu>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSMutableArray *destructiveElements; // ivar: _destructiveElements
@property (copy, nonatomic) NSArray *excludedActionTypes; // ivar: _excludedActionTypes
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)addDestructiveElement:(id)arg0 ;


@end


#endif