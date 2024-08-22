// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSLOOKUPMATCH_H
#define NSLOOKUPMATCH_H


#import <Foundation/Foundation.h>

#import "NSTextCheckingResult.h"
#import "NSString.h"

@interface NSLookupMatch : NSObject

@property (retain) NSTextCheckingResult *dataDetectorResult; // ivar: _dataDetectorResult
@property (retain) NSString *languageIdentifier; // ivar: _languageIdentifier
@property (readonly) NSUInteger matchType; // ivar: _matchType
@property (readonly) _NSRange range; // ivar: _range
@property (readonly) CGFloat score; // ivar: _score


+(id)matchesInString:(id)arg0 types:(NSUInteger)arg1 range:(struct _NSRange )arg2 ;
-(id)description;
-(id)initWithType:(NSUInteger)arg0 range:(struct _NSRange )arg1 score:(CGFloat)arg2 ;
-(void)dealloc;


@end


#endif