// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KVITEMBUILDER_H
#define KVITEMBUILDER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface KVItemBuilder : NSObject {
    FlatBufferBuilder _fbb;
    vector<apple::aiml::flatbuffers2::Offset<koa::vocabulary::Field>, std::allocator<apple::aiml::flatbuffers2::Offset<koa::vocabulary::Field>>> _fields;
    NSInteger _itemType;
    NSString *_itemId;
}




+(id)buildFieldWithType:(NSInteger)arg0 label:(id)arg1 value:(id)arg2 error:(*id)arg3 ;
+(void)initialize;
-(id)_addFieldWithType:(NSInteger)arg0 localeType:(NSInteger)arg1 label:(id)arg2 value:(id)arg3 error:(*id)arg4 ;
-(id)addFieldWithType:(NSInteger)arg0 label:(id)arg1 value:(id)arg2 error:(*id)arg3 ;
-(id)addFieldWithType:(NSInteger)arg0 localeType:(NSInteger)arg1 label:(id)arg2 value:(id)arg3 error:(*id)arg4 ;
-(id)addFieldWithType:(NSInteger)arg0 localeType:(NSInteger)arg1 value:(id)arg2 error:(*id)arg3 ;
-(id)addFieldWithType:(NSInteger)arg0 value:(id)arg1 error:(*id)arg2 ;
-(id)buildBufferWithError:(*id)arg0 ;
-(id)buildItemWithError:(*id)arg0 ;
-(id)init;
-(id)setItemType:(NSInteger)arg0 itemId:(id)arg1 error:(*id)arg2 ;
-(void)_reset;


@end


#endif