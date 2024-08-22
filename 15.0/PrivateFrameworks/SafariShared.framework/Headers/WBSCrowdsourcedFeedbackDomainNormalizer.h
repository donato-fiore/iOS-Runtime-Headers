// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSCROWDSOURCEDFEEDBACKDOMAINNORMALIZER_H
#define WBSCROWDSOURCEDFEEDBACKDOMAINNORMALIZER_H

@class NSValueTransformer, NSCharacterSet;



@interface WBSCrowdsourcedFeedbackDomainNormalizer : NSValueTransformer {
    NSCharacterSet *_dotCharacterSet;
}




+(BOOL)allowsReverseTransformation;
+(Class)transformedValueClass;
-(id)init;
-(id)transformedValue:(id)arg0 ;


@end


#endif