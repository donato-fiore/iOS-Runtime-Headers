// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LRRCDMPROTOBUFCONVERTER_H
#define LRRCDMPROTOBUFCONVERTER_H


#import <Foundation/Foundation.h>


@interface LRRCdmProtobufConverter : NSObject



+(id)deserializeMDRequestFromJson:(id)arg0 ;
+(id)deserializeMDResponseFromJson:(id)arg0 ;
+(id)deserializeMRRequestFromJson:(id)arg0 ;
+(id)deserializeMRResponseFromJson:(id)arg0 ;
+(id)deserializeNluResponseFromJson:(id)arg0 ;
+(id)deserializeUsoGraphFromJson:(id)arg0 ;
+(id)serializeUsoGraphToJson:(id)arg0 ;


@end


#endif