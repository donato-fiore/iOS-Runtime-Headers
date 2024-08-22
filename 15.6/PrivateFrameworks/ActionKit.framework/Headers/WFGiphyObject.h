// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFGIPHYOBJECT_H
#define WFGIPHYOBJECT_H

@class MTLModel, NSString, NSDictionary, NSURL;
@protocol NSSecureCoding, WFNaming, WFSerializableContent, MTLJSONSerializing;



@interface WFGiphyObject : MTLModel <NSSecureCoding, WFNaming, WFSerializableContent, MTLJSONSerializing>



@property (readonly, copy, nonatomic) NSString *caption; // ivar: _caption
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSDictionary *images; // ivar: _images
@property (readonly, copy, nonatomic) NSString *objectId; // ivar: _objectId
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *type; // ivar: _type
@property (readonly, copy, nonatomic) NSURL *url; // ivar: _url
@property (readonly, copy, nonatomic) NSString *wfName;


+(BOOL)supportsSecureCoding;
+(id)JSONKeyPathsByPropertyKey;
+(id)allowedSecureCodingClassesByPropertyKey;
+(id)objectWithWFSerializedRepresentation:(id)arg0 ;
-(id)originalImage;
-(id)smallestImage;
-(id)wfSerializedRepresentation;


@end


#endif