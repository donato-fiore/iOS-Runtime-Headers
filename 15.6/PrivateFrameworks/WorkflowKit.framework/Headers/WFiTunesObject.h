// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFITUNESOBJECT_H
#define WFITUNESOBJECT_H

@class NSDictionary, NSString, NSURL;
@protocol MTLJSONSerializing, NSSecureCoding, WFNaming;


#import "MTLModel.h"

@interface WFiTunesObject : MTLModel <MTLJSONSerializing, NSSecureCoding, WFNaming>



@property (readonly, nonatomic) NSDictionary *artworkURLs; // ivar: _artworkURLs
@property (readonly, nonatomic) NSString *censoredName; // ivar: _censoredName
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSString *kind; // ivar: _kind
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSURL *viewURL; // ivar: _viewURL
@property (readonly, copy, nonatomic) NSString *wfName;


+(BOOL)supportsSecureCoding;
+(Class)classForParsingJSONDictionary:(id)arg0 ;
+(id)JSONKeyPathsByPropertyKey;
+(id)allowedSecureCodingClassesByPropertyKey;
+(id)artistIDJSONTransformer;
+(id)releaseDateJSONTransformer;
-(id)initWithName:(id)arg0 identifier:(id)arg1 kind:(id)arg2 ;


@end


#endif