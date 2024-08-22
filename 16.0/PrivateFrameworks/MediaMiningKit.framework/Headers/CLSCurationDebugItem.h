// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLSCURATIONDEBUGITEM_H
#define CLSCURATIONDEBUGITEM_H

@protocol CLSInvestigationItem;


#import "CLSCurationDebugObject.h"
#import "CLSCurationDebugItem.h"

@interface CLSCurationDebugItem : CLSCurationDebugObject {
    NSUInteger _dedupingType;
    CLSCurationDebugItem *_dedupedDebugItem;
}


@property (retain, nonatomic) NSObject<CLSInvestigationItem> *item; // ivar: _item


+(id)stringForDedupingType:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)identifier;
-(id)initWithItem:(id)arg0 ;
-(id)timestamp;
-(void)dupeToDebugItem:(id)arg0 withDedupingType:(NSUInteger)arg1 ;


@end


#endif