// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHPREFIXQUERYITEM_H
#define CHPREFIXQUERYITEM_H

@class NSString, NSSet;

#import <Foundation/Foundation.h>


@interface CHPrefixQueryItem : NSObject

@property (readonly, nonatomic) *CGPath estimatedBaseline; // ivar: _estimatedBaseline
@property (readonly, nonatomic) NSString *queryResult; // ivar: _queryResult
@property (readonly, copy, nonatomic) NSSet *strokeIdentifiers; // ivar: _strokeIdentifiers


-(BOOL)isEqualToPrefixQueryItem:(id)arg0 ;
-(id)initWithStrokeIdentifiers:(id)arg0 queryResult:(id)arg1 estimatedBaseline:(struct CGPath *)arg2 ;
-(void)dealloc;


@end


#endif