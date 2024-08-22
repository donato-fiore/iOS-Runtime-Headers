// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXFACEGALLERYCONFIGURATION_H
#define ATXFACEGALLERYCONFIGURATION_H

@class NSString, NSDictionary, NSLocale, NSArray;
@protocol BMStoreData, ATXProtoBufWrapper, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface ATXFaceGalleryConfiguration : NSObject <BMStoreData, ATXProtoBufWrapper, NSSecureCoding, NSCopying>



@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSDictionary *jsonDictionary;
@property (retain, nonatomic) NSLocale *locale; // ivar: _locale
@property (copy, nonatomic) NSArray *sections; // ivar: _sections
@property (nonatomic) NSInteger source; // ivar: _source
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)configurationFromJSONDictionary:(id)arg0 ;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXFaceGalleryConfiguration:(id)arg0 ;
-(id)configurationByApplyingConfiguration:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)encodeAsProto;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)initWithSections:(id)arg0 ;
-(id)initWithSections:(id)arg0 source:(NSInteger)arg1 ;
-(id)initWithSections:(id)arg0 source:(NSInteger)arg1 locale:(id)arg2 ;
-(id)json;
-(id)proto;
-(id)serialize;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif