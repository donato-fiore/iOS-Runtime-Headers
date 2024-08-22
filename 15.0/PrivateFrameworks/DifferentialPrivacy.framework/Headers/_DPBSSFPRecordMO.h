// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DPBSSFPRECORDMO_H
#define _DPBSSFPRECORDMO_H

@class NSManagedObject, NSString;



@interface _DPBSSFPRecordMO : NSManagedObject

@property (nonatomic) CGFloat creationDate;
@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSString *privateValue;
@property (nonatomic) NSInteger reportVersion;
@property (nonatomic) NSInteger segmentIndex;
@property (nonatomic) BOOL submitted;
@property (retain, nonatomic) NSString *tableVersion;
@property (nonatomic) BOOL verificationMode;


+(id)fetchRequest;


@end


#endif