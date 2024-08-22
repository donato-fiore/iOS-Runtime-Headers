// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFWORDPRESSFILE_H
#define WFWORDPRESSFILE_H

@class MTLModel, NSString, NSDictionary, NSNumber, NSURL;
@protocol MTLJSONSerializing, NSSecureCoding;



@interface WFWordPressFile : MTLModel <MTLJSONSerializing, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly, copy, nonatomic) NSNumber *fileId; // ivar: _fileId
@property (readonly, copy, nonatomic) NSString *filename; // ivar: _filename
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *type; // ivar: _type
@property (readonly, copy, nonatomic) NSURL *url; // ivar: _url


+(BOOL)supportsSecureCoding;
+(id)JSONKeyPathsByPropertyKey;


@end


#endif