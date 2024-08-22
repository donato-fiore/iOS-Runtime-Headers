// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CMKAPPADATA_H
#define CMKAPPADATA_H

@class NSNumber;


#import "CMLogItem.h"

@interface CMKappaData : CMLogItem {
    int fState;
}


@property (readonly, nonatomic) NSNumber *state;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithState:(int)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif