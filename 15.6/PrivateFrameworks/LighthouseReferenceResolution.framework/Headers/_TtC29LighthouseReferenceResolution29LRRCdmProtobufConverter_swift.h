// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC29LIGHTHOUSEREFERENCERESOLUTION29LRRCDMPROTOBUFCONVERTER_SWIFT_H
#define _TTC29LIGHTHOUSEREFERENCERESOLUTION29LRRCDMPROTOBUFCONVERTER_SWIFT_H


#import <Foundation/Foundation.h>


@interface _TtC29LighthouseReferenceResolution29LRRCdmProtobufConverter_swift : NSObject



+(id)deserializeMDRequestFromJsonWithProtoJson:(id)arg0 ;
+(id)deserializeMDResponseFromJsonWithProtoJson:(id)arg0 ;
+(id)deserializeMRRequestFromJsonWithProtoJson:(id)arg0 ;
+(id)deserializeMRResponseFromJsonWithProtoJson:(id)arg0 ;
+(id)deserializeMatchingSpanFromJsonWithProtoJson:(id)arg0 ;
+(id)deserializeNluRequestFromJsonWithProtoJson:(id)arg0 ;
+(id)deserializeNluResponseFromJsonWithProtoJson:(id)arg0 ;
+(id)deserializeUsoGraphFromJsonWithProtoJson:(id)arg0 ;
+(id)serializeNluRequestToJsonWithProtoData:(id)arg0 ;
+(id)serializeNluResponseToJsonWithProtoData:(id)arg0 ;
+(id)serializeUsoGraphToJsonWithProtoData:(id)arg0 ;
-(id)init;


@end


#endif