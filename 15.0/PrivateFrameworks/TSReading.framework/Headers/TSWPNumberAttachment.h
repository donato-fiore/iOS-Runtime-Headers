// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSWPNUMBERATTACHMENT_H
#define TSWPNUMBERATTACHMENT_H

@class NSString;


#import "TSWPTextualAttachment.h"

@interface TSWPNumberAttachment : TSWPTextualAttachment

@property (nonatomic) int numberFormat; // ivar: _numberFormat
@property (copy, nonatomic) NSString *stringValue; // ivar: _stringValue


-(id)copyWithContext:(id)arg0 ;
-(id)stringEquivalent;
-(id)stringEquivalentWithLayoutParent:(id)arg0 ;
-(id)stringWithNumber:(NSUInteger)arg0 ;
-(void)dealloc;


@end


#endif