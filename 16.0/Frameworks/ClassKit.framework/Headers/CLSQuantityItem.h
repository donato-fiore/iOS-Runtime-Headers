// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLSQUANTITYITEM_H
#define CLSQUANTITYITEM_H



#import "CLSActivityItem.h"

@interface CLSQuantityItem : CLSActivityItem {
    CGFloat _quantity;
}


@property (nonatomic) CGFloat quantity;


+(BOOL)supportsSecureCoding;
-(id)_init;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 title:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif