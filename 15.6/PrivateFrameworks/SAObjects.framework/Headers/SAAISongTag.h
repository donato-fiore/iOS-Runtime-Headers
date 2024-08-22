// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAAISONGTAG_H
#define SAAISONGTAG_H

@class NSString, NSURL;


#import "SADomainObject.h"
#import "SAUIImageResource.h"

@interface SAAISongTag : SADomainObject

@property (copy, nonatomic) NSString *adamId;
@property (copy, nonatomic) NSString *album;
@property (copy, nonatomic) NSString *albumAdamId;
@property (copy, nonatomic) NSString *artist;
@property (copy, nonatomic) NSString *artistAdamId;
@property (copy, nonatomic) NSString *contentRating;
@property (copy, nonatomic) NSURL *iTunesUri;
@property (retain, nonatomic) SAUIImageResource *previewImage;
@property (copy, nonatomic) NSURL *radioStationUri;
@property (copy, nonatomic) NSString *title;


+(id)songTag;
+(id)songTagWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif