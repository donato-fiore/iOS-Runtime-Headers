// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFSEARCHRESULT_H
#define _SFSEARCHRESULT_H

@class NSData, NSHTTPURLResponse;

#import <Foundation/Foundation.h>


@interface _SFSearchResult : NSObject

@property (readonly, nonatomic) NSData *data; // ivar: _data
@property (readonly, nonatomic) NSHTTPURLResponse *response; // ivar: _response
@property (readonly, nonatomic) NSInteger searchType; // ivar: _searchType


-(id)description;
-(id)initWithVoiceSearchResult:(id)arg0 ;


@end


#endif