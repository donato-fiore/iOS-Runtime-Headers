// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXSS_PUNCTUATIONGROUP_H
#define AXSS_PUNCTUATIONGROUP_H

@class NSManagedObject, NSSet, NSUUID, NSString, NSDate;



@interface AXSS_PunctuationGroup : NSManagedObject

@property (retain, nonatomic) NSSet *autoSwitchContexts;
@property (copy, nonatomic) NSUUID *basePunctuationUUID;
@property (copy, nonatomic) NSString *ckChangeTag;
@property (copy, nonatomic) NSDate *ckRecordProcessDate;
@property (nonatomic) BOOL inCloud;
@property (copy, nonatomic) NSDate *lastModifiedDate;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSUUID *uuid;
@property (nonatomic) short version;


+(id)fetchRequest;


@end


#endif