// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRCONTENTITEMMETADATAAUDIOROUTE_H
#define MRCONTENTITEMMETADATAAUDIOROUTE_H

@class NSDictionary, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "_MRAudioRouteProtobuf.h"

@interface MRContentItemMetadataAudioRoute : NSObject <NSCopying>



@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (nonatomic) BOOL hasSpatializationEnabled; // ivar: _hasSpatializationEnabled
@property (nonatomic) BOOL hasSupportsSpatialization; // ivar: _hasSupportsSpatialization
@property (nonatomic) BOOL hasType; // ivar: _hasType
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) _MRAudioRouteProtobuf *protobuf;
@property (nonatomic, getter=isSpatializationEnabled) BOOL spatializationEnabled; // ivar: _spatializationEnabled
@property (nonatomic) BOOL supportsSpatialization; // ivar: _supportsSpatialization
@property (nonatomic) NSInteger type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;


@end


#endif