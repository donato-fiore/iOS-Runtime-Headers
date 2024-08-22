// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTDISABLESESSIONLOG_H
#define FTDISABLESESSIONLOG_H

@class NSMutableDictionary, NSData;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface FTDisableSessionLog : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *DisableSessionLog _root;
}




-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct DisableSessionLog *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct DisableSessionLog *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::qss_fb::DisableSessionLog> )addObjectToBuffer:(*void)arg0 ;


@end


#endif