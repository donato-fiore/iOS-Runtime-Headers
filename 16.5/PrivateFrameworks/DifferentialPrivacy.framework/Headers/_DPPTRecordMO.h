// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _DPPTRECORDMO_H
#define _DPPTRECORDMO_H

@class NSManagedObject, NSString;



@interface _DPPTRecordMO : NSManagedObject

@property (nonatomic) CGFloat creationDate;
@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSString *privateValue;
@property (nonatomic) NSInteger reportVersion;
@property (nonatomic) BOOL submitted;


+(id)fetchRequest;


@end


#endif