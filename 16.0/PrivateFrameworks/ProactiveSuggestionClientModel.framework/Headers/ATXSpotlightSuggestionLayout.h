// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXSPOTLIGHTSUGGESTIONLAYOUT_H
#define ATXSPOTLIGHTSUGGESTIONLAYOUT_H

@class NSArray, NSString, NSUUID;
@protocol ATXUICacheProtocol, NSCopying;

#import <Foundation/Foundation.h>

#import "ATXProactiveSuggestion.h"

@interface ATXSpotlightSuggestionLayout : NSObject <ATXUICacheProtocol, NSCopying>



@property (readonly, nonatomic) NSArray *collections; // ivar: _collections
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) ATXProactiveSuggestion *highestConfidenceSuggestion;
@property (readonly, nonatomic) NSArray *scores; // ivar: _scores
@property (readonly) Class superclass;
@property (retain, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)isValidInputWithCollections:(id)arg0 scores:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXSpotlightSuggestionLayout:(id)arg0 ;
-(id)compactDescription;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)encodeAsProto;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCollections:(id)arg0 scores:(id)arg1 uuid:(id)arg2 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)proto;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif