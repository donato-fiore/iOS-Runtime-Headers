// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAMPMEDIAPLAYERORDERINGTERM_H
#define SAMPMEDIAPLAYERORDERINGTERM_H

@class NSString;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SAMPMediaPlayerOrderingTerm : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *mediaPlayerOrderingDirection;
@property (nonatomic) int mediaPlayerSearchProperty;
@property (readonly) Class superclass;


+(id)mediaPlayerOrderingTerm;
+(id)mediaPlayerOrderingTermWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif