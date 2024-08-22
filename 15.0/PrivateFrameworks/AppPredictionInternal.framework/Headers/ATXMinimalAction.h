// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXMINIMALACTION_H
#define ATXMINIMALACTION_H

@class NSString;
@protocol BMStoreData, ATXProtoBufWrapper;

#import <Foundation/Foundation.h>


@interface ATXMinimalAction : NSObject <BMStoreData, ATXProtoBufWrapper>



@property (readonly, nonatomic) NSString *actionType; // ivar: _actionType
@property (readonly, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger paramHash; // ivar: _paramHash
@property (readonly) Class superclass;


+(id)datastore;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXMinimalAction:(id)arg0 ;
-(id)actionFromDatastoreLookup;
-(id)actionFromDatastoreLookupForDatastore:(id)arg0 ;
-(id)encodeAsProto;
-(id)init;
-(id)initWithBundleId:(id)arg0 actionType:(id)arg1 paramHash:(NSInteger)arg2 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)json;
-(id)jsonDict;
-(id)proto;
-(id)serialize;


@end


#endif