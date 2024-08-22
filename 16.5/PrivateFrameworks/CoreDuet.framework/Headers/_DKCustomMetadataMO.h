// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _DKCUSTOMMETADATAMO_H
#define _DKCUSTOMMETADATAMO_H

@class NSManagedObject, NSData, NSDate, NSNumber, NSSet, NSString;



@interface _DKCustomMetadataMO : NSManagedObject

@property (copy, nonatomic) NSData *binaryValue;
@property (copy, nonatomic) NSDate *dateValue;
@property (copy, nonatomic) NSNumber *doubleValue;
@property (retain, nonatomic) NSSet *event;
@property (copy, nonatomic) NSNumber *integerValue;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *stringValue;
@property (copy, nonatomic) NSString *valueHash;


+(id)fetchRequest;


@end


#endif