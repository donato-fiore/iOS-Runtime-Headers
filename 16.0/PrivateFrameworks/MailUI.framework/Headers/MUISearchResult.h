// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUISEARCHRESULT_H
#define MUISEARCHRESULT_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "MUISearchRequestID.h"

@interface MUISearchResult : NSObject

@property (readonly, nonatomic) NSArray *categories; // ivar: _categories
@property (readonly, nonatomic) unsigned char phraseKind; // ivar: _phraseKind
@property (readonly, nonatomic) MUISearchRequestID *requestID; // ivar: _requestID
@property (readonly, nonatomic) NSArray *suggestions; // ivar: _suggestions




@end


#endif