// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CADPREDICATE_H
#define CADPREDICATE_H

@class NSPredicate;
@protocol NSSecureCoding;



@interface CADPredicate : NSPredicate <NSSecureCoding>





+(void)setValidator:(Class)arg0 ;
-(BOOL)evaluateWithObject:(id)arg0 ;


@end


#endif