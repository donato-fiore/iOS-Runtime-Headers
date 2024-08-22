// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVASSETVARIANTCHANNELCOUNTPREDICATE_H
#define AVASSETVARIANTCHANNELCOUNTPREDICATE_H

@class NSPredicate, NSDictionary, NSPredicateOperator;



@interface AVAssetVariantChannelCountPredicate : NSPredicate {
    NSInteger _channelcount;
    NSDictionary *_mediaSelectionOptionPlist;
    NSPredicateOperator *_operator;
}




+(BOOL)supportsSecureCoding;
-(BOOL)evaluateWithObject:(id)arg0 substitutionVariables:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithChannelCount:(NSInteger)arg0 mediaSelectionOption:(id)arg1 operatorType:(NSUInteger)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)predicateFormat;
-(void)acceptVisitor:(id)arg0 flags:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif