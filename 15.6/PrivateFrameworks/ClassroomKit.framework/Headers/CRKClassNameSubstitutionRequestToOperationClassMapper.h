// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKCLASSNAMESUBSTITUTIONREQUESTTOOPERATIONCLASSMAPPER_H
#define CRKCLASSNAMESUBSTITUTIONREQUESTTOOPERATIONCLASSMAPPER_H

@class NSArray, NSString;
@protocol CRKRequestToOperationClassMapping;

#import <Foundation/Foundation.h>


@interface CRKClassNameSubstitutionRequestToOperationClassMapper : NSObject <CRKRequestToOperationClassMapping>

 {
    NSArray *mAllowedPrefixes;
    NSString *mOperationPrefix;
}




-(Class)operationClassForRequest:(id)arg0 ;
-(id)init;
-(id)initWithAllowedRequestPrefixes:(id)arg0 operationPrefix:(id)arg1 ;
-(id)prefixForString:(id)arg0 ;
-(id)stringByApplyingOperationPrefixToString:(id)arg0 ;
-(id)stringByApplyingOperationSuffixToString:(id)arg0 ;


@end


#endif