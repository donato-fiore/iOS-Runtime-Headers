// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAVCSPLAYTRAILER_H
#define SAVCSPLAYTRAILER_H

@class NSString, NSURL;


#import "SAAceView.h"
#import "SAUIImageResource.h"

@interface SAVCSPlayTrailer : SAAceView

@property (copy, nonatomic) NSString *contentType;
@property (copy, nonatomic) NSURL *hiresTrailerUri;
@property (retain, nonatomic) SAUIImageResource *image;
@property (copy, nonatomic) NSURL *lowresTrailerUri;
@property (copy, nonatomic) NSURL *url;
@property (copy, nonatomic) NSString *utsId;


+(id)playTrailer;
+(id)playTrailerWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif