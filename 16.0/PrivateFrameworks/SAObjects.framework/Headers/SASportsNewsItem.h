// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SASPORTSNEWSITEM_H
#define SASPORTSNEWSITEM_H

@class NSString, NSURL;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SASportsNewsItem : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSURL *link;
@property (copy, nonatomic) NSString *summary;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title;


+(id)newsItem;
+(id)newsItemWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif