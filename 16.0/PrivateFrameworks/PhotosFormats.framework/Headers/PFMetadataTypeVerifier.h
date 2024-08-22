// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFMETADATATYPEVERIFIER_H
#define PFMETADATATYPEVERIFIER_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface PFMetadataTypeVerifier : NSObject {
    NSDictionary *_expectedImageDictionaryPropertyTypes;
    NSDictionary *_expectedImageArrayPropertyTypes;
    NSDictionary *_expectedAVMetadataIdentifierTypes;
    NSDictionary *_expectedAVMetadataKeyKeySpaceTypes;
}




-(id)_coerceValue:(id)arg0 toClass:(Class)arg1 forKey:(id)arg2 ;
-(id)_expectedAVMetadataIdentifierTypes;
-(id)_expectedAVMetadataKeyKeySpaceTypes;
-(id)_expectedImageArrayPropertyTypes;
-(id)_expectedImageDictionaryPropertyTypes;
-(id)_verifiedValue:(id)arg0 forKey:(id)arg1 expectedTypes:(id)arg2 ;
-(id)init;
-(id)valueAtIndex:(NSUInteger)arg0 forKey:(id)arg1 fromArray:(id)arg2 ;
-(id)valueForAVMetadataIdentifier:(id)arg0 fromAVMetadataItems:(id)arg1 ;
-(id)valueForKey:(id)arg0 fromProperties:(id)arg1 ;
-(id)valueForKey:(id)arg0 keySpace:(id)arg1 fromAVMetadataItems:(id)arg2 ;
-(id)valueForKeyPath:(id)arg0 fromProperties:(id)arg1 ;
-(id)valueForKeyPath:(id)arg0 index:(NSUInteger)arg1 fromProperties:(id)arg2 ;


@end


#endif