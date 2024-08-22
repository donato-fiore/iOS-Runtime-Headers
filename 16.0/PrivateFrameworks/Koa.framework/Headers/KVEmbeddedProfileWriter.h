// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KVEMBEDDEDPROFILEWRITER_H
#define KVEMBEDDEDPROFILEWRITER_H

@class NSOutputStream, NSString;
@protocol KVProfileWriter;

#import <Foundation/Foundation.h>

#import "KVProfileInfo.h"
#import "KVDatasetInfo.h"

@interface KVEmbeddedProfileWriter : NSObject <KVProfileWriter>

 {
    NSOutputStream *_stream;
    KVProfileInfo *_profileInfo;
    KVDatasetInfo *_datasetInfo;
    FlatBufferBuilder _fbb;
    vector<apple::aiml::flatbuffers2::Offset<koa::vocabulary::Dataset>, std::allocator<apple::aiml::flatbuffers2::Offset<koa::vocabulary::Dataset>>> _datasets;
    vector<apple::aiml::flatbuffers2::Offset<koa::vocabulary::NestedItem>, std::allocator<apple::aiml::flatbuffers2::Offset<koa::vocabulary::NestedItem>>> _items;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)addItem:(id)arg0 error:(*id)arg1 ;
-(BOOL)finishDataset:(*id)arg0 ;
-(BOOL)finishProfile:(*id)arg0 ;
-(BOOL)startDataset:(id)arg0 error:(*id)arg1 ;
-(BOOL)startProfile:(id)arg0 error:(*id)arg1 ;
-(id)initWithOutputStream:(id)arg0 ;


@end


#endif