// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SRCSPHRASEMATCHRESULT_H
#define SRCSPHRASEMATCHRESULT_H

@class NSString;
@protocol SRCSTextMarkerRangeProtocol;

#import <Foundation/Foundation.h>


@interface SRCSPhraseMatchResult : NSObject

@property (readonly) NSObject<SRCSTextMarkerRangeProtocol> *markerRange; // ivar: _markerRange
@property (readonly) NSString *matchedString; // ivar: _matchedString
@property (retain) id *userInfo; // ivar: _userInfo


-(NSInteger)location;
-(id)description;
-(id)initWithMarkerRange:(id)arg0 matchedString:(id)arg1 userInfo:(id)arg2 ;


@end


#endif