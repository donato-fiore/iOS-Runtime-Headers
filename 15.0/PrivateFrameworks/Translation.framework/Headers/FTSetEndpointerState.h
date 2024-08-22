// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FTSETENDPOINTERSTATE_H
#define FTSETENDPOINTERSTATE_H

@class NSMutableDictionary, NSData;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface FTSetEndpointerState : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *SetEndpointerState _root;
}


@property (readonly, nonatomic) BOOL enable_server_side_endpoint;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct SetEndpointerState *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct SetEndpointerState *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::SetEndpointerState> )addObjectToBuffer:(*void)arg0 ;


@end


#endif