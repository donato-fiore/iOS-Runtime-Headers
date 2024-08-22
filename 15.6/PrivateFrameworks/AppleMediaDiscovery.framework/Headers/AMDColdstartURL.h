// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMDCOLDSTARTURL_H
#define AMDCOLDSTARTURL_H

@class NSManagedObject, NSString;



@interface AMDColdstartURL : NSManagedObject

@property (copy, nonatomic) NSString *modelId;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *version;


+(id)deleteAllColdstartUrls:(*id)arg0 ;
+(id)deleteWithPredicate:(id)arg0 error:(*id)arg1 ;
+(id)fetchAll:(*id)arg0 ;
+(id)fetchRequest;
+(id)getColdstartURLForModel:(id)arg0 error:(*id)arg1 ;
+(id)getCurrentURLInfoByModelId;
+(void)deleteColdstartURLs:(id)arg0 error:(*id)arg1 ;
+(void)saveColdstartURL:(id)arg0 error:(*id)arg1 ;


@end


#endif