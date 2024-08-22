// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DOCHOTFOLDEREVENT_H
#define DOCHOTFOLDEREVENT_H

@class NSString, FPItem, NSNumber;


#import "DOCFrecencyBasedEvent.h"

@interface DOCHotFolderEvent : DOCFrecencyBasedEvent

@property (copy, nonatomic) NSString *appBundleIdentifier; // ivar: _appBundleIdentifier
@property (copy, nonatomic) FPItem *folderItem; // ivar: _folderItem
@property (retain, nonatomic) NSNumber *rowId; // ivar: _rowId
@property (nonatomic) NSUInteger type; // ivar: _type


-(id)initWithAppBundleIdentifier:(id)arg0 folderItem:(id)arg1 type:(NSUInteger)arg2 lastUsedDate:(id)arg3 frecency:(CGFloat)arg4 ;
-(id)initWithRowId:(id)arg0 appBundleIdentifier:(id)arg1 folderItem:(id)arg2 type:(NSUInteger)arg3 lastUsedDate:(id)arg4 frecency:(CGFloat)arg5 ;


@end


#endif