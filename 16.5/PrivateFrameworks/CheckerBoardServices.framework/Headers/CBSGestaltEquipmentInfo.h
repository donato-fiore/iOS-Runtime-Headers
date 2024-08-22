// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CBSGESTALTEQUIPMENTINFO_H
#define CBSGESTALTEQUIPMENTINFO_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface CBSGestaltEquipmentInfo : NSObject

@property (readonly, nonatomic) NSArray *imeiArray; // ivar: _imeiArray
@property (readonly, nonatomic) NSString *meid; // ivar: _meid
@property (readonly, nonatomic) NSString *serialNumber; // ivar: _serialNumber


+(id)CurrentEquipmentInfo;
-(id)initWithSerialNumber:(id)arg0 andMEID:(id)arg1 andIMEIArray:(id)arg2 ;


@end


#endif