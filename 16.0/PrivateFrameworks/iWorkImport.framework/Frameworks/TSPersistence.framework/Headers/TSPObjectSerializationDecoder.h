// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSPOBJECTSERIALIZATIONDECODER_H
#define TSPOBJECTSERIALIZATIONDECODER_H

@class NSMutableDictionary, NSString;
@protocol TSPDecoder, OS_dispatch_data;

#import <Foundation/Foundation.h>


@interface TSPObjectSerializationDecoder : NSObject <TSPDecoder>

 {
    NSObject<OS_dispatch_data> *_encodedData;
    NSUInteger _encodedDataLength;
    NSMutableDictionary *_directory;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithEncodedData:(id)arg0 ;
-(id)newReadChannelForDataWithIdentifier:(NSInteger)arg0 info:(id)arg1 ;
-(id)newReadChannelForLocator:(id)arg0 ;
-(id)newReadChannelForMetadata;
-(id)newReadChannelForRootObjectComponent;


@end


#endif