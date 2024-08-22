// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXFACEGALLERYSECTION_H
#define ATXFACEGALLERYSECTION_H

@class NSString, NSArray, NSDictionary;
@protocol BMStoreData, ATXProtoBufWrapper, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ATXFaceGallerySection : NSObject <BMStoreData, ATXProtoBufWrapper, NSSecureCoding>



@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *items; // ivar: _items
@property (readonly, copy, nonatomic) NSDictionary *jsonDictionary;
@property (copy, nonatomic) NSString *localizedDescriptiveText; // ivar: _localizedDescriptiveText
@property (copy, nonatomic) NSString *localizedSubtitle; // ivar: _localizedSubtitle
@property (copy, nonatomic) NSString *localizedTitle; // ivar: _localizedTitle
@property (readonly, nonatomic) NSInteger semanticType; // ivar: _semanticType
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *symbolColorName; // ivar: _symbolColorName
@property (copy, nonatomic) NSString *symbolImageName; // ivar: _symbolImageName
@property (nonatomic) NSInteger type; // ivar: _type
@property (copy, nonatomic) NSString *unityDescription; // ivar: _unityDescription


+(BOOL)supportsSecureCoding;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)sectionFromJSONDictionary:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)encodeAsProto;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLocalizedTitle:(id)arg0 symbolImageName:(id)arg1 symbolColorName:(id)arg2 localizedSubtitle:(id)arg3 localizedDescriptiveText:(id)arg4 unityDescription:(id)arg5 type:(NSInteger)arg6 items:(id)arg7 semanticType:(NSInteger)arg8 ;
-(id)initWithLocalizedTitle:(id)arg0 unityDescription:(id)arg1 type:(NSInteger)arg2 items:(id)arg3 ;
-(id)initWithLocalizedTitle:(id)arg0 unityDescription:(id)arg1 type:(NSInteger)arg2 items:(id)arg3 semanticType:(NSInteger)arg4 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)json;
-(id)proto;
-(id)serialize;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif