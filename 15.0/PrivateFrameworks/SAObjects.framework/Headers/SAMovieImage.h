// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAMOVIEIMAGE_H
#define SAMOVIEIMAGE_H

@class NSString, NSURL;
@protocol SAAceSerializable;


#import "AceObject.h"
#import "SAMovieResolution.h"

@interface SAMovieImage : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SAMovieResolution *resolution;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSURL *uri;


+(id)image;
+(id)imageWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif