// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLSBINARYITEM_H
#define CLSBINARYITEM_H



#import "CLSActivityItem.h"

@interface CLSBinaryItem : CLSActivityItem {
    BOOL _value;
}


@property (nonatomic) BOOL value;
@property (nonatomic) NSInteger valueType; // ivar: _valueType


+(BOOL)supportsSecureCoding;
-(id)_init;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 title:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 title:(id)arg1 type:(NSInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif