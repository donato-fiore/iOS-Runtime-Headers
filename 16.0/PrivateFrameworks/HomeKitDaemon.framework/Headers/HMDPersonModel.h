// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDPERSONMODEL_H
#define HMDPERSONMODEL_H

@class HMBModel, NSString, NSSet, NSData;



@interface HMDPersonModel : HMBModel

@property (retain) NSString *name;
@property (copy) NSSet *personLinks;
@property (retain) NSData *personLinksData;


+(id)hmbProperties;
+(id)sentinelParentUUID;
-(id)createPerson;
-(id)initWithPerson:(id)arg0 ;


@end


#endif