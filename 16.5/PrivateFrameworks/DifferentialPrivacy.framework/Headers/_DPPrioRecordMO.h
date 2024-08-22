// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _DPPRIORECORDMO_H
#define _DPPRIORECORDMO_H

@class NSManagedObject, NSString, NSData;



@interface _DPPrioRecordMO : NSManagedObject

@property (nonatomic) CGFloat creationDate;
@property (nonatomic) NSInteger dimension;
@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSData *metadata;
@property (nonatomic) NSInteger reportVersion;
@property (retain, nonatomic) NSData *share1;
@property (retain, nonatomic) NSData *share2;
@property (nonatomic) BOOL submitted;


+(id)fetchRequest;


@end


#endif