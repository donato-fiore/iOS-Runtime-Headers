// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DPBITVALUERECORDMO_H
#define _DPBITVALUERECORDMO_H

@class NSManagedObject, NSString;



@interface _DPBitValueRecordMO : NSManagedObject

@property (nonatomic) short clearBitValue;
@property (nonatomic) CGFloat creationDate;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *privateBitValueStr;
@property (nonatomic) NSInteger reportVersion;
@property (nonatomic) BOOL submitted;


+(id)fetchRequest;


@end


#endif