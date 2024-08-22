// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFCONDITION_H
#define HFCONDITION_H

@class NSString, NSPredicate;
@protocol NAEquatable;

#import <Foundation/Foundation.h>


@interface HFCondition : NSObject <NAEquatable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSPredicate *predicate; // ivar: _predicate
@property (readonly) Class superclass;


+(Class)homeKitRepresentationClass;
-(BOOL)isEqual:(id)arg0 ;
-(id)hf_naturalLanguageSummaryWithOptions:(id)arg0 ;
-(id)initWithPredicate:(id)arg0 ;


@end


#endif