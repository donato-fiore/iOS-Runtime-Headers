// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFWORDPRESSBLOG_H
#define WFWORDPRESSBLOG_H

@class MTLModel, NSNumber, NSString, NSDictionary, NSURL;
@protocol MTLJSONSerializing, NSSecureCoding;



@interface WFWordPressBlog : MTLModel <MTLJSONSerializing, NSSecureCoding>



@property (readonly, copy, nonatomic) NSNumber *blogId; // ivar: _blogId
@property (readonly, copy, nonatomic) NSString *blogName; // ivar: _blogName
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly, copy, nonatomic) NSURL *endpointURL; // ivar: _endpointURL
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isAdmin; // ivar: _isAdmin
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSURL *url; // ivar: _url


+(BOOL)supportsSecureCoding;
+(id)JSONKeyPathsByPropertyKey;
+(id)blogWithEndpointURL:(id)arg0 ;
-(id)initWithEndpointURL:(id)arg0 ;


@end


#endif