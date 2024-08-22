// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IPFEATURE_H
#define IPFEATURE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface IPFeature : NSObject

@property CGFloat confidence; // ivar: _confidence
@property _NSRange matchRange; // ivar: _matchRange
@property (copy) NSString *textUnit; // ivar: _textUnit
@property CGFloat weight; // ivar: _weight


-(BOOL)isMatchStringInsideQuotationMarks;
-(id)description;
-(id)matchString;


@end


#endif