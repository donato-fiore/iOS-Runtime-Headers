// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGMICRODATAITEMPROP_H
#define SGMICRODATAITEMPROP_H

@class NSString;

#import <Foundation/Foundation.h>

#import "SGMicrodataItem.h"

@interface SGMicrodataItemProp : NSObject

@property (readonly, nonatomic) SGMicrodataItem *itemValue; // ivar: _itemValue
@property (readonly, nonatomic) NSString *propertyName; // ivar: _propertyName
@property (readonly, nonatomic) NSString *stringValue; // ivar: _stringValue


-(id)initWithName:(id)arg0 value:(id)arg1 ;


@end


#endif