// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DKPROTOBUFMETADATA_H
#define _DKPROTOBUFMETADATA_H

@class NSString, NSDictionary;
@protocol _DKProtobufConverting;

#import <Foundation/Foundation.h>


@interface _DKProtobufMetadata : NSObject <_DKProtobufConverting>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionary; // ivar: _dictionary
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)createFromData:(id)arg0 ;
+(id)fromPBCodable:(id)arg0 ;
-(id)asData;
-(id)initWithDictionary:(id)arg0 ;
-(id)toPBCodable;


@end


#endif