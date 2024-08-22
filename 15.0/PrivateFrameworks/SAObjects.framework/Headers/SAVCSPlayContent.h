// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAVCSPLAYCONTENT_H
#define SAVCSPLAYCONTENT_H

@class NSString, NSURL;


#import "SABaseClientBoundCommand.h"

@interface SAVCSPlayContent : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *contentType;
@property (copy, nonatomic) NSURL *hiresTrailerUri;
@property (copy, nonatomic) NSURL *lowresTrailerUri;
@property (nonatomic) BOOL playTrailer;
@property (copy, nonatomic) NSString *utsId;


+(id)playContent;
+(id)playContentWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif