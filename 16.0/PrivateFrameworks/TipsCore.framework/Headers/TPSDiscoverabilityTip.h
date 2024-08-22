// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPSDISCOVERABILITYTIP_H
#define TPSDISCOVERABILITYTIP_H

@class NSAttributedString, NSDictionary;


#import "TPSTip.h"

@interface TPSDiscoverabilityTip : TPSTip

@property (retain, nonatomic) NSAttributedString *attributedString; // ivar: _attributedString
@property (nonatomic, getter=isLocalContent) BOOL localContent; // ivar: _localContent
@property (copy, nonatomic) NSDictionary *preconditions; // ivar: _preconditions


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif