// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PXSETTINGSINDEXENTRY_H
#define _PXSETTINGSINDEXENTRY_H

@class NSIndexPath, NSString;

#import <Foundation/Foundation.h>

#import "_PXSettingsIndexEntry.h"

@interface _PXSettingsIndexEntry : NSObject

@property (readonly, nonatomic) NSIndexPath *indexPath; // ivar: _indexPath
@property (weak, nonatomic) _PXSettingsIndexEntry *parentEntry; // ivar: _parentEntry
@property (readonly, nonatomic) NSString *rowTitle; // ivar: _rowTitle
@property (readonly, nonatomic) NSString *sectionTitle; // ivar: _sectionTitle
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) NSString *title;


+(id)_cellForRowAtIndexPath:(id)arg0 inTableView:(id)arg1 ;
+(id)_titleForRowAtIndexPath:(id)arg0 inTableView:(id)arg1 ;
-(BOOL)matchesSearchString:(id)arg0 ;
-(id)initWithRowAtIndexPath:(id)arg0 inTableView:(id)arg1 ;
-(void)_revealInSettingsController:(id)arg0 drillIn:(BOOL)arg1 withCompletionHandler:(id)arg2 ;
-(void)_revealInTopOfSettingsController:(id)arg0 drillIn:(BOOL)arg1 withCompletionHandler:(id)arg2 ;
-(void)revealInSettingsController:(id)arg0 withCompletionHandler:(id)arg1 ;


@end


#endif