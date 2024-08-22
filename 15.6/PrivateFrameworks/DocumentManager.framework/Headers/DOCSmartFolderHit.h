// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DOCSMARTFOLDERHIT_H
#define DOCSMARTFOLDERHIT_H

@class FPItem, NSNumber, NSString;


#import "DOCFrecencyBasedEvent.h"

@interface DOCSmartFolderHit : DOCFrecencyBasedEvent

@property (copy, nonatomic) FPItem *folderItem; // ivar: _folderItem
@property (retain, nonatomic) NSNumber *rowId; // ivar: _rowId
@property (nonatomic) NSUInteger type; // ivar: _type
@property (copy, nonatomic) NSString *value; // ivar: _value


-(id)initWithFolder:(id)arg0 type:(NSUInteger)arg1 value:(id)arg2 lastUsedDate:(id)arg3 frecency:(CGFloat)arg4 ;
-(id)initWithRowId:(id)arg0 folder:(id)arg1 type:(NSUInteger)arg2 value:(id)arg3 lastUsedDate:(id)arg4 frecency:(CGFloat)arg5 ;


@end


#endif