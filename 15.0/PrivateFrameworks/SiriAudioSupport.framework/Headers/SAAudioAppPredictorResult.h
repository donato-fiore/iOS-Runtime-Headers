// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAAUDIOAPPPREDICTORRESULT_H
#define SAAUDIOAPPPREDICTORRESULT_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface SAAudioAppPredictorResult : NSObject {
    ? requestId;
    ? selectedBundleIdentifier;
    ? disambiguateBundleIdentifiers;
}


@property (nonatomic, readonly) NSArray *disambiguateBundleIdentifiers;
@property (nonatomic, readonly) NSString *requestId;
@property (nonatomic, readonly) NSString *selectedBundleIdentifier;


-(id)init;
-(id)initWithRequestId:(id)arg0 selectedBundleIdentifier:(id)arg1 disambiguateBundleIdentifiers:(id)arg2 ;


@end


#endif