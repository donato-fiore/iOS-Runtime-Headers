// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSPPASTEBOARDNATIVEDATAPROVIDER_H
#define TSPPASTEBOARDNATIVEDATAPROVIDER_H

@class NSMutableDictionary, NSString, NSArray;
@protocol TSPDecoder;

#import <Foundation/Foundation.h>

#import "TSPPasteboard.h"

@interface TSPPasteboardNativeDataProvider : NSObject <TSPDecoder>

 {
    TSPPasteboard *_pasteboard;
    NSMutableDictionary *_nativeData;
    NSMutableDictionary *_tspData;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *promisedDataTypes;
@property (readonly) Class superclass;


-(id)dataForIdentifier:(NSInteger)arg0 ;
-(id)init;
-(id)initWithPasteboard:(id)arg0 nativeData:(id)arg1 tspData:(id)arg2 ;
-(id)newReadChannelForDataWithIdentifier:(NSInteger)arg0 info:(id)arg1 ;
-(id)newReadChannelForMetadata;
-(id)newReadChannelForRootObjectComponent;
-(id)pasteboardPropertyListForType:(id)arg0 ;
-(void)loadNativeData;


@end


#endif