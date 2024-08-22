// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFURLCONTENTDESTINATION_H
#define WFURLCONTENTDESTINATION_H

@class NSString, NSSet;
@protocol NSSecureCoding, NSCopying, WFSerializableContent;


#import "WFContentDestination.h"

@interface WFURLContentDestination : WFContentDestination <NSSecureCoding, NSCopying, WFSerializableContent>

 {
    NSString *_localizedTitle;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSSet *hostnames; // ivar: _hostnames
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)cloudappDestination;
+(id)destinationWithHostname:(id)arg0 ;
+(id)destinationWithHostnames:(id)arg0 ;
+(id)destinationWithURL:(id)arg0 error:(*id)arg1 ;
+(id)destinationWithURLs:(id)arg0 error:(*id)arg1 ;
+(id)evernoteDestination;
+(id)giphyDestination;
+(id)imgurDestination;
+(id)instapaperDestination;
+(id)invalidHostnameErrorForInputURL:(id)arg0 ;
+(id)objectWithWFSerializedRepresentation:(id)arg0 ;
+(id)pinboardDestination;
+(id)pocketDestination;
+(id)todoistDestination;
+(id)trelloDestination;
+(id)tumblrDestination;
+(id)wordpressDestination;
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