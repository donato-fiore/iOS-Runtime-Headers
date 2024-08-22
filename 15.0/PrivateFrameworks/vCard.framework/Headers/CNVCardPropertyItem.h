// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNVCARDPROPERTYITEM_H
#define CNVCARDPROPERTYITEM_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CNVCardPropertyItem : NSObject

@property (readonly) NSString *identifier; // ivar: _identifier
@property (readonly) NSString *label; // ivar: _label
@property (readonly) id *value; // ivar: _value


+(id)itemWithValue:(id)arg0 label:(id)arg1 identifier:(id)arg2 ;
-(id)description;
-(id)initWithValue:(id)arg0 label:(id)arg1 identifier:(id)arg2 ;


@end


#endif