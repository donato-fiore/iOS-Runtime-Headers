// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PFMETADATATYPEVERIFIER_H
#define PFMETADATATYPEVERIFIER_H


#import <Foundation/Foundation.h>


@interface PFMetadataTypeVerifier : NSObject



+(id)_convertValue:(id)arg0 toClass:(Class)arg1 forKey:(id)arg2 ;
+(id)_expectedPropertyTypes;
+(id)verifiedValueForKey:(id)arg0 fromProperties:(id)arg1 ;
+(id)verifiedValueForKey:(id)arg0 keySpace:(id)arg1 fromAVMetadataItems:(id)arg2 ;


@end


#endif