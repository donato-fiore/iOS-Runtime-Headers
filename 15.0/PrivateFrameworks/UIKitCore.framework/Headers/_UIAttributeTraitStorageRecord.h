// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIATTRIBUTETRAITSTORAGERECORD_H
#define _UIATTRIBUTETRAITSTORAGERECORD_H

@protocol NSCoding;

#import <Foundation/Foundation.h>

#import "UITraitCollection.h"

@interface _UIAttributeTraitStorageRecord : NSObject <NSCoding>



@property (readonly, nonatomic) UITraitCollection *traitCollection; // ivar: _traitCollection
@property (readonly, nonatomic) id *value; // ivar: _value


-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTraitCollection:(id)arg0 value:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif