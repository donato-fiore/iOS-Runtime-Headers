// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFPODCASTSHOWOBJECT_H
#define WFPODCASTSHOWOBJECT_H

@class MTLModel, NSArray, NSString, NSDictionary, NSURL;
@protocol MTLJSONSerializing, NSSecureCoding, WFNaming;



@interface WFPodcastShowObject : MTLModel <MTLJSONSerializing, NSSecureCoding, WFNaming>



@property (readonly, nonatomic) NSArray *children; // ivar: _children
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly, nonatomic) NSURL *feedURL; // ivar: _feedURL
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *storeId; // ivar: _storeId
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSString *uuid; // ivar: _uuid
@property (readonly, copy, nonatomic) NSString *wfName;


+(BOOL)supportsSecureCoding;
+(id)JSONKeyPathsByPropertyKey;


@end


#endif