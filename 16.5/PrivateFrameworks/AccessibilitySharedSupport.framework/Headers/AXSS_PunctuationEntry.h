// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXSS_PUNCTUATIONENTRY_H
#define AXSS_PUNCTUATIONENTRY_H

@class NSManagedObject, NSString, NSDate, NSUUID;



@interface AXSS_PunctuationEntry : NSManagedObject

@property (copy, nonatomic) NSString *ckChangeTag;
@property (copy, nonatomic) NSDate *ckRecordProcessDate;
@property (copy, nonatomic) NSUUID *groupUUID;
@property (nonatomic) BOOL inCloud;
@property (copy, nonatomic) NSDate *lastModifiedDate;
@property (copy, nonatomic) NSString *punctuation;
@property (copy, nonatomic) NSString *replacement;
@property (copy, nonatomic) NSString *rule;
@property (copy, nonatomic) NSUUID *uuid;
@property (nonatomic) short version;


+(id)fetchRequest;


@end


#endif