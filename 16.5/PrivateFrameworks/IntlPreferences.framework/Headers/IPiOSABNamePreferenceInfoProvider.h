// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IPIOSABNAMEPREFERENCEINFOPROVIDER_H
#define IPIOSABNAMEPREFERENCEINFOPROVIDER_H

@class NSString;
@protocol IPNamePreferenceInfoProvider;

#import <Foundation/Foundation.h>


@interface IPiOSABNamePreferenceInfoProvider : NSObject <IPNamePreferenceInfoProvider>



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