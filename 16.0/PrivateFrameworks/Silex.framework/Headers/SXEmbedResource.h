// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXEMBEDRESOURCE_H
#define SXEMBEDRESOURCE_H

@class NSString, NSURL, NSDate;
@protocol SXEmbedResource;


#import "SXResource.h"

@interface SXEmbedResource : SXResource <SXEmbedResource>



@property (readonly, nonatomic) NSString *HTML;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly) Class superclass;


-(id)expirationDateWithValue:(id)arg0 withType:(int)arg1 ;


@end


#endif