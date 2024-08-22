// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSAMSCHANNELAPPSRESPONSEDICTIONARYVALUETRANSFORMER_H
#define VSAMSCHANNELAPPSRESPONSEDICTIONARYVALUETRANSFORMER_H

@class NSValueTransformer;



@interface VSAMSChannelAppsResponseDictionaryValueTransformer : NSValueTransformer



+(BOOL)allowsReverseTransformation;
+(Class)transformedValueClass;
-(id)parseAppData:(id)arg0 ;
-(id)transformedValue:(id)arg0 ;


@end


#endif