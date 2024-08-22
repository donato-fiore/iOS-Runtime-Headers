// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFURLCONTENTLOCATION_H
#define WFURLCONTENTLOCATION_H

@class NSString, NSSet;
@protocol NSSecureCoding, NSCopying, WFSerializableContent;


#import "WFContentLocation.h"

@interface WFURLContentLocation : WFContentLocation <NSSecureCoding, NSCopying, WFSerializableContent>

 {
    NSString *_localizedTitle;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSSet *hostnames; // ivar: _hostnames
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)cloudappLocation;
+(id)evernoteLocation;
+(id)giphyLocation;
+(id)imgurLocation;
+(id)instapaperLocation;
+(id)invalidHostnameErrorForInputURL:(id)arg0 ;
+(id)locationWithHostname:(id)arg0 ;
+(id)locationWithHostnames:(id)arg0 ;
+(id)locationWithURL:(id)arg0 error:(*id)arg1 ;
+(id)locationWithURLs:(id)arg0 error:(*id)arg1 ;
+(id)objectWithWFSerializedRepresentation:(id)arg0 ;
+(id)pinboardLocation;
+(id)pocketLocation;
+(id)todoistLocation;
+(id)trelloLocation;
+(id)tumblrLocation;
+(id)wordpressLocation;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)managedLevel;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHostnames:(id)arg0 ;
-(id)localizedTitle;
-(id)wfSerializedRepresentation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif