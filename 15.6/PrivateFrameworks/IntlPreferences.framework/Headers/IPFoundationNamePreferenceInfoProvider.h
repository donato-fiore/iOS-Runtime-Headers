// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IPFOUNDATIONNAMEPREFERENCEINFOPROVIDER_H
#define IPFOUNDATIONNAMEPREFERENCEINFOPROVIDER_H

@class NSString;
@protocol IPNamePreferenceInfoProvider;

#import <Foundation/Foundation.h>


@interface IPFoundationNamePreferenceInfoProvider : NSObject <IPNamePreferenceInfoProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)canonicalKeyToValueIdentifierToNumericValueMap;
+(id)canonicalNameToNativeKeyName;
+(id)domain;
+(id)nativeKeyNameToCanonicalKeyName;
+(id)valueIdentifierToValueMapFromCanonicalKey:(id)arg0 ;
+(id)valueToValueIdentifierMapFromCanonicalKey:(id)arg0 ;


@end


#endif