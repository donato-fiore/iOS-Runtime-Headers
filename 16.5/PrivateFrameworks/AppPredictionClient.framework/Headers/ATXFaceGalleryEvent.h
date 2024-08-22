// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXFACEGALLERYEVENT_H
#define ATXFACEGALLERYEVENT_H

@class NSString, NSArray, NSDictionary;
@protocol BMStoreData, ATXProtoBufWrapper;

#import <Foundation/Foundation.h>

#import "ATXFaceGalleryConfiguration.h"

@interface ATXFaceGalleryEvent : NSObject <BMStoreData, ATXProtoBufWrapper>



@property (readonly, nonatomic) ATXFaceGalleryConfiguration *configuration; // ivar: _configuration
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger eventType; // ivar: _eventType
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *items; // ivar: _items
@property (readonly, copy, nonatomic) NSDictionary *jsonDictionary;
@property (readonly) Class superclass;


+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)galleryDidAppearEventWithConfiguration:(id)arg0 ;
+(id)galleryDidDisappearEvent;
+(id)itemsDidAppearEventWithItems:(id)arg0 ;
-(id)encodeAsProto;
-(id)initWithEventType:(NSInteger)arg0 configuration:(id)arg1 items:(id)arg2 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)json;
-(id)proto;
-(id)serialize;


@end


#endif