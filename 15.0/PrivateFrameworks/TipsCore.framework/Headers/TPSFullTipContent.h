// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPSFULLTIPCONTENT_H
#define TPSFULLTIPCONTENT_H

@class NSArray;


#import "TPSActionableContent.h"

@interface TPSFullTipContent : TPSActionableContent

@property (copy, nonatomic) NSArray *footnoteContent; // ivar: _footnoteContent


+(BOOL)supportsSecureCoding;
+(id)na_identity;
-(id)debugDescription;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 metadata:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif