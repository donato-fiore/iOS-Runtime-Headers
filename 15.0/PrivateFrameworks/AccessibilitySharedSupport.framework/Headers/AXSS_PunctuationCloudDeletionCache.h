// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXSS_PUNCTUATIONCLOUDDELETIONCACHE_H
#define AXSS_PUNCTUATIONCLOUDDELETIONCACHE_H

@class NSManagedObject, NSString, NSUUID;



@interface AXSS_PunctuationCloudDeletionCache : NSManagedObject

@property (copy, nonatomic) NSString *entityType;
@property (copy, nonatomic) NSUUID *uuid;


+(id)fetchRequest;


@end


#endif