// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFDATEPICKERITEMIDENTIFIER_H
#define MFDATEPICKERITEMIDENTIFIER_H

@class NSUUID;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MFDatePickerItemIdentifier : NSObject <NSCopying>



@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithIdentifier:(id)arg0 type:(NSUInteger)arg1 ;


@end


#endif