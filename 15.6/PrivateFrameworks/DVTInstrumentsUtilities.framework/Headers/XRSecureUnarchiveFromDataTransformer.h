// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef XRSECUREUNARCHIVEFROMDATATRANSFORMER_H
#define XRSECUREUNARCHIVEFROMDATATRANSFORMER_H

@class NSValueTransformer;



@interface XRSecureUnarchiveFromDataTransformer : NSValueTransformer



+(id)whitelistedClassesForTransforming;
+(void)addWhitelistedClass:(Class)arg0 ;
-(id)reverseTransformedValue:(id)arg0 ;
-(id)transformedValue:(id)arg0 ;


@end


#endif