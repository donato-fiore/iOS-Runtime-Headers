// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef KVDATASETINFO_H
#define KVDATASETINFO_H

@class NSData, NSString;
@protocol KVJSONEncodable, KVJSONDecodable;

#import <Foundation/Foundation.h>


@interface KVDatasetInfo : NSObject <KVJSONEncodable, KVJSONDecodable>

 {
    *DatasetInfo _datasetInfo;
}


@property (readonly, nonatomic) NSData *buffer; // ivar: _buffer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDatasetInfo:(id)arg0 ;
-(NSInteger)itemType;
-(id)JSONWithIndent:(unsigned char)arg0 ;
-(id)capturedTime;
-(id)deviceId;
-(id)init;
-(id)initFromDictionary:(id)arg0 error:(*id)arg1 ;
-(id)initWithBuffer:(id)arg0 error:(*id)arg1 ;
-(id)initWithItemType:(NSInteger)arg0 originAppId:(id)arg1 deviceId:(id)arg2 userId:(id)arg3 lastModifiedTime:(id)arg4 capturedTime:(id)arg5 itemCount:(unsigned int)arg6 error:(*id)arg7 ;
-(id)initWithItemType:(NSInteger)arg0 originAppId:(id)arg1 itemCount:(unsigned int)arg2 error:(*id)arg3 ;
-(id)initWithItemType:(NSInteger)arg0 originAppId:(id)arg1 userId:(id)arg2 itemCount:(unsigned int)arg3 error:(*id)arg4 ;
-(id)initWithSizePrefixedBuffer:(id)arg0 error:(*id)arg1 ;
-(id)lastModifiedTime;
-(id)originAppId;
-(id)userId;
-(unsigned int)itemCount;


@end


#endif