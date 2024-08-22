// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKMENTIONQUERYITEM_H
#define PKMENTIONQUERYITEM_H

@class CHPrefixQueryItem, NSString;


#import "PKDetectionQueryItem.h"

@interface PKMentionQueryItem : PKDetectionQueryItem

@property (retain, nonatomic) CHPrefixQueryItem *coreHandwritingPrefixQueryItem; // ivar: _coreHandwritingPrefixQueryItem
@property (copy, nonatomic) NSString *mentionResult; // ivar: _mentionResult


-(BOOL)isEqual:(id)arg0 ;
-(id)baselinePath;
-(id)initWithCoreHandwritingPrefixQueryItem:(id)arg0 ;
-(id)strokeIdentifiers;


@end


#endif