// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTTODAYWEBEMBEDPROTOITEM_H
#define NTTODAYWEBEMBEDPROTOITEM_H

@class NSString, NTPBTodaySectionConfigWebEmbed;
@protocol NTTodayProtoitem;

#import <Foundation/Foundation.h>


@interface NTTodayWebEmbedProtoitem : NSObject <NTTodayProtoitem>



@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NTPBTodaySectionConfigWebEmbed *webEmbed; // ivar: _webEmbed


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)assetHandlesWithOperationInfo:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithIdentifier:(id)arg0 webEmbed:(id)arg1 ;
-(id)itemWithContentContext:(id)arg0 operationInfo:(id)arg1 sectionDescriptor:(id)arg2 todayData:(id)arg3 assetFileURLsByRemoteURL:(id)arg4 preferredDynamicSlotAllocation:(NSUInteger)arg5 ;


@end


#endif