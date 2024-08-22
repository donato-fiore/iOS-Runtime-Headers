// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFCLOUDKITWEBSERVICEREQUEST_H
#define WFCLOUDKITWEBSERVICEREQUEST_H

@class CKContainer, CKDatabase;

#import <Foundation/Foundation.h>


@interface WFCloudKitWebServiceRequest : NSObject

@property (readonly, nonatomic) CKContainer *container; // ivar: _container
@property (readonly, nonatomic) CKDatabase *database; // ivar: _database


-(NSUInteger)webServiceForRequestType:(NSUInteger)arg0 ;
-(id)cloudKitAPIToken;
-(id)cloudKitEnvironment;
-(id)extractRecordDictFromRecordIfNecessary:(id)arg0 recordType:(id)arg1 ;
-(id)fetchProxiedRecordWithIdentifier:(id)arg0 possibleItemTypes:(id)arg1 completionHandler:(id)arg2 ;
-(id)fetchRecordsWithItemType:(Class)arg0 filter:(id)arg1 cacheKey:(id)arg2 completionHandler:(id)arg3 ;
-(id)getJSONFromURL:(id)arg0 completionHandler:(id)arg1 ;
-(id)getJSONFromURL:(id)arg0 headers:(id)arg1 completionHandler:(id)arg2 ;
-(id)initWithContainer:(id)arg0 database:(id)arg1 ;
-(id)pathComponentsForType:(NSUInteger)arg0 parameters:(id)arg1 ;
-(id)postJSON:(id)arg0 toURL:(id)arg1 cacheKey:(id)arg2 completionHandler:(id)arg3 ;
-(id)queryWithItemType:(Class)arg0 filter:(id)arg1 ;
-(id)recordsFromQueryResponse:(id)arg0 ;
-(id)urlForType:(NSUInteger)arg0 parameters:(id)arg1 ;
-(void)parseRecord:(id)arg0 intoItem:(id)arg1 allKeys:(BOOL)arg2 ;


@end


#endif