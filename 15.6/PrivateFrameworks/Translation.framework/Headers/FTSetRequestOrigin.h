// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FTSETREQUESTORIGIN_H
#define FTSETREQUESTORIGIN_H

@class NSMutableDictionary, NSData;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface FTSetRequestOrigin : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *SetRequestOrigin _root;
}


@property (readonly, nonatomic) BOOL enable_geo_location_features;
@property (readonly, nonatomic) CGFloat latitude;
@property (readonly, nonatomic) CGFloat longitude;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct SetRequestOrigin *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct SetRequestOrigin *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::SetRequestOrigin> )addObjectToBuffer:(*void)arg0 ;


@end


#endif