// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UICOMMANDINTERNALDIFF_H
#define _UICOMMANDINTERNALDIFF_H

@class NSDictionary, NSSet;

#import <Foundation/Foundation.h>


@interface _UICommandInternalDiff : NSObject

@property (readonly, nonatomic) NSDictionary *inserts; // ivar: _inserts
@property (readonly, nonatomic) NSDictionary *itemDeletes; // ivar: _itemDeletes
@property (readonly, nonatomic) NSSet *menuDeletes; // ivar: _menuDeletes
@property (readonly, nonatomic) NSDictionary *replacements; // ivar: _replacements


-(id)_deletesForMenu:(id)arg0 ;
-(id)_parentInsertsForMenu:(id)arg0 ;
-(id)_replacementsForMenu:(id)arg0 ;
-(void)deleteItem:(id)arg0 inMenu:(id)arg1 ;
-(void)deleteMenu:(id)arg0 ;
-(void)insertAtStartElements:(id)arg0 atEndElements:(id)arg1 inMenu:(id)arg2 ;
-(void)insertBeforeElements:(id)arg0 afterElements:(id)arg1 aroundElement:(id)arg2 inMenu:(id)arg3 ;
-(void)insertFallbackBeforeElements:(id)arg0 fallbackAfterElements:(id)arg1 inMenu:(id)arg2 ;
-(void)replaceItem:(id)arg0 inMenu:(id)arg1 withElements:(id)arg2 ;


@end


#endif