// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXCMMSUGGESTIONSDATASOURCECONTEXT_H
#define PXCMMSUGGESTIONSDATASOURCECONTEXT_H

@class PHSuggestionMessageContext;

#import <Foundation/Foundation.h>


@interface PXCMMSuggestionsDataSourceContext : NSObject

@property (nonatomic) NSInteger fetchLimit; // ivar: _fetchLimit
@property (nonatomic) NSUInteger matchingStrategy; // ivar: _matchingStrategy
@property (retain, nonatomic) PHSuggestionMessageContext *messageContext; // ivar: _messageContext
@property (nonatomic) BOOL shouldShowAccepted; // ivar: _shouldShowAccepted
@property (readonly, nonatomic) unsigned char type; // ivar: _type


-(BOOL)supportsMatching;
-(id)description;
-(id)initWithType:(unsigned char)arg0 ;


@end


#endif