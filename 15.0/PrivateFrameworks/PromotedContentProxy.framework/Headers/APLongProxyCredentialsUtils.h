// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef APLONGPROXYCREDENTIALSUTILS_H
#define APLONGPROXYCREDENTIALSUTILS_H


#import <Foundation/Foundation.h>


@interface APLongProxyCredentialsUtils : NSObject



+(NSUInteger)basicProxyAuthHeaderSizeForUser:(id)arg0 withPassword:(id)arg1 ;
+(NSUInteger)decodedSizeForEncodedLength:(NSUInteger)arg0 ;
+(id)buildTrimmedUrlStringFromUrl:(id)arg0 byRemovingBytes:(NSUInteger)arg1 ;
+(id)buildTrimmedUrlStringFromUrl:(id)arg0 toReduceEncodedSizeBy:(NSUInteger)arg1 ;


@end


#endif