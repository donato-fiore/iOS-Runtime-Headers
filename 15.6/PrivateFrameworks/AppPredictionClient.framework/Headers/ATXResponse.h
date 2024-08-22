// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXRESPONSE_H
#define ATXRESPONSE_H

@class NSUUID, NSData, NSError, NSArray;
@protocol NSSecureCoding, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ATXResponse : NSObject <NSSecureCoding>

 {
    NSObject<OS_dispatch_queue> *_appClipQueue;
}


@property (readonly, nonatomic) NSUUID *blendingModelUICacheUpdateUUID; // ivar: _blendingModelUICacheUpdateUUID
@property (readonly, nonatomic) NSData *cacheFileData; // ivar: _cacheFileData
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSArray *predictedApps;
@property (readonly, nonatomic) NSArray *predictions; // ivar: _predictions
@property (readonly, nonatomic) NSArray *proactiveSuggestions; // ivar: _proactiveSuggestions
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToResponse:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPredictions:(id)arg0 cacheFileData:(id)arg1 error:(id)arg2 ;
-(id)initWithPredictions:(id)arg0 proactiveSuggestions:(id)arg1 uuid:(id)arg2 cacheFileData:(id)arg3 blendingUICacheUpdateUUID:(id)arg4 error:(id)arg5 ;
-(id)json;
-(id)jsonDescription;
-(id)jsonRawData;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateAtxSearchResults:(id)arg0 ;


@end


#endif