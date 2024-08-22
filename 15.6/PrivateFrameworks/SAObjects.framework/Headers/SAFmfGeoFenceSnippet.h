// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAFMFGEOFENCESNIPPET_H
#define SAFMFGEOFENCESNIPPET_H

@class NSNumber, NSString, NSURL;


#import "SAUISnippet.h"
#import "SAFmfGeoFence.h"

@interface SAFmfGeoFenceSnippet : SAUISnippet

@property (retain, nonatomic) SAFmfGeoFence *aceFmfGeoFence;
@property (copy, nonatomic) NSNumber *enable;
@property (copy, nonatomic) NSString *fenceType;
@property (copy, nonatomic) NSNumber *oneTimeOnly;
@property (copy, nonatomic) NSURL *searchContext;


+(id)geoFenceSnippet;
+(id)geoFenceSnippetWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif