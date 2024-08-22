// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKHASHTAGQUERYITEM_H
#define PKHASHTAGQUERYITEM_H

@class CHPrefixQueryItem, NSString;


#import "PKDetectionQueryItem.h"

@interface PKHashtagQueryItem : PKDetectionQueryItem

@property (retain, nonatomic) CHPrefixQueryItem *coreHandwritingPrefixQueryItem; // ivar: _coreHandwritingPrefixQueryItem
@property (copy, nonatomic) NSString *hashtagResult; // ivar: _hashtagResult


-(BOOL)isEqual:(id)arg0 ;
-(id)baselinePath;
-(id)initWithCoreHandwritingPrefixQueryItem:(id)arg0 ;
-(id)strokeIdentifiers;


@end


#endif