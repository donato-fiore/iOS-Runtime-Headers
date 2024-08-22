// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CTMOBILEEQUIPMENTINFOLIST_H
#define CTMOBILEEQUIPMENTINFOLIST_H

@class NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTMobileEquipmentInfoList : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSArray *meInfoList; // ivar: _meInfoList


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif