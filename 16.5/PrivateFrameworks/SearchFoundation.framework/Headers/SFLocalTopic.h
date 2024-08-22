// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFLOCALTOPIC_H
#define SFLOCALTOPIC_H

@class NSString;
@protocol SFLocalTopic;


#import "SFTopic.h"
#import "SFSearchResult.h"

@interface SFLocalTopic : SFTopic <SFLocalTopic>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (copy, nonatomic) SFSearchResult *result; // ivar: _result
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithResult:(id)arg0 ;
-(id)initWithResult:(id)arg0 identifier:(id)arg1 ;
-(id)normalizedTopic;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif