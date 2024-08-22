// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICHASHTAGSCHECKRESULTS_H
#define ICHASHTAGSCHECKRESULTS_H

@class NSSet;

#import <Foundation/Foundation.h>


@interface ICHashtagsCheckResults : NSObject

@property (copy, nonatomic) NSSet *matchingHashtagSuggestions; // ivar: _matchingHashtagSuggestions
@property (nonatomic) _NSRange rangeOfHashtag; // ivar: _rangeOfHashtag


-(id)debugDescription;
-(id)init;


@end


#endif