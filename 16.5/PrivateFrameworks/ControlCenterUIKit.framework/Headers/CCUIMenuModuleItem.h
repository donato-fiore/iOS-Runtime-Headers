// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CCUIMENUMODULEITEM_H
#define CCUIMENUMODULEITEM_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CCUIMenuModuleItem : NSObject

@property (nonatomic, getter=isBusy) BOOL busy; // ivar: _busy
@property (copy, nonatomic) id *handler; // ivar: _handler
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic, getter=isPlaceholder) BOOL placeholder; // ivar: _placeholder
@property (nonatomic, getter=isSelected) BOOL selected; // ivar: _selected
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (copy, nonatomic) NSString *title; // ivar: _title


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)performAction;
-(NSUInteger)hash;
-(id)description;
-(id)initWithTitle:(id)arg0 identifier:(id)arg1 handler:(id)arg2 ;


@end


#endif