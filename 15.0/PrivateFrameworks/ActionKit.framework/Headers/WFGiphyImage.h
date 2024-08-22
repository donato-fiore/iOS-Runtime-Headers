// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFGIPHYIMAGE_H
#define WFGIPHYIMAGE_H

@class MTLModel, WFImage, NSString, NSDictionary, NSURL;
@protocol NSSecureCoding, MTLJSONSerializing;



@interface WFGiphyImage : MTLModel <NSSecureCoding, MTLJSONSerializing>



@property (retain, nonatomic) WFImage *cachedImage; // ivar: _cachedImage
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly, nonatomic) NSUInteger fileSize; // ivar: _fileSize
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger height; // ivar: _height
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSURL *url; // ivar: _url
@property (readonly, copy, nonatomic) NSURL *videoURL; // ivar: _videoURL
@property (readonly, nonatomic) NSUInteger width; // ivar: _width


+(BOOL)supportsSecureCoding;
+(id)JSONKeyPathsByPropertyKey;
+(id)JSONTransformerForKey:(id)arg0 ;


@end


#endif