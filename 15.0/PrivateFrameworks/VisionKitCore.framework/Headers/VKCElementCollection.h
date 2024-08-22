// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VKCELEMENTCOLLECTION_H
#define VKCELEMENTCOLLECTION_H

@class NSArray, NSString;


#import "VKCBaseElement.h"

@interface VKCElementCollection : VKCBaseElement

@property (retain, nonatomic) NSArray *_children; // ivar: __children
@property (retain, nonatomic) NSString *title; // ivar: _title


+(id)collectionWithTitle:(id)arg0 children:(id)arg1 parent:(id)arg2 ;
+(id)collectionWithTitle:(id)arg0 elementInfoText:(id)arg1 parent:(id)arg2 ;
-(id)children;
-(id)stringValue;


@end


#endif