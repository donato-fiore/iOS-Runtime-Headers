// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXASSISTANTLISTVIEWITEM_H
#define PXASSISTANTLISTVIEWITEM_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PXAssistantListViewItem : NSObject

@property (readonly, copy, nonatomic) NSString *detail; // ivar: _detail
@property (readonly, nonatomic) BOOL enabled; // ivar: _enabled
@property (readonly, nonatomic) id *representedObject; // ivar: _representedObject
@property (readonly, nonatomic) BOOL selected; // ivar: _selected
@property (readonly, copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly, copy, nonatomic) NSString *systemImageName; // ivar: _systemImageName
@property (readonly, nonatomic) NSInteger tag; // ivar: _tag
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(id)itemWithTag:(NSInteger)arg0 title:(id)arg1 enabled:(BOOL)arg2 ;
+(id)itemWithTitle:(id)arg0 ;
+(id)navigationItemWithTag:(NSInteger)arg0 title:(id)arg1 subtitle:(id)arg2 enabled:(BOOL)arg3 ;
+(id)ruleItemWithTag:(NSInteger)arg0 title:(id)arg1 subtitle:(id)arg2 detail:(id)arg3 systemImageName:(id)arg4 enabled:(BOOL)arg5 ;
+(id)selectionItemWithTag:(NSInteger)arg0 title:(id)arg1 selected:(BOOL)arg2 enabled:(BOOL)arg3 ;
-(id)init;
-(id)initWithType:(NSInteger)arg0 tag:(NSInteger)arg1 representedObject:(id)arg2 title:(id)arg3 subtitle:(id)arg4 detail:(id)arg5 systemImageName:(id)arg6 selected:(BOOL)arg7 enabled:(BOOL)arg8 ;


@end


#endif