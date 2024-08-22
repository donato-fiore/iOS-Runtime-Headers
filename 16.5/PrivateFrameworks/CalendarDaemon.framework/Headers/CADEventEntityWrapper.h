// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CADEVENTENTITYWRAPPER_H
#define CADEVENTENTITYWRAPPER_H



#import "CADEntityWrapper.h"

@interface CADEventEntityWrapper : CADEntityWrapper {
    CGFloat _occurrenceDate;
}


@property (nonatomic) BOOL isDropoffEvent; // ivar: _isDropoffEvent
@property (nonatomic) BOOL isPickupEvent; // ivar: _isPickupEvent


+(BOOL)supportsSecureCoding;
-(id)initWithCalEntity:(*void)arg0 loadedValues:(id)arg1 occurrenceDate:(CGFloat)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)occurrenceDate;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif