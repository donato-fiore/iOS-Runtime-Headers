// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DESMETADATASCHEMA_H
#define DESMETADATASCHEMA_H

@class NSString;
@protocol DESMetadataEncoder;

#import <Foundation/Foundation.h>


@interface DESMetadataSchema : NSObject

@property (readonly, nonatomic) NSInteger buckets; // ivar: _buckets
@property (readonly, nonatomic) NSString *desc; // ivar: _desc
@property (readonly, nonatomic) NSObject<DESMetadataEncoder> *encoder; // ivar: _encoder
@property (readonly, nonatomic) NSString *key; // ivar: _key
@property (readonly, nonatomic) int outputType; // ivar: _outputType


+(void)initialize;
-(id)initWith:(id)arg0 key:(id)arg1 attachments:(id)arg2 error:(*id)arg3 ;


@end


#endif