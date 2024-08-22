// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAMOVIERESOLUTION_H
#define SAMOVIERESOLUTION_H

@class NSString;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SAMovieResolution : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger height;
@property (readonly) Class superclass;
@property (nonatomic) NSInteger width;


+(id)resolution;
+(id)resolutionWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif