// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MDPATHFILTERGENERATOR_H
#define MDPATHFILTERGENERATOR_H

@class NSMutableDictionary, NSMutableArray, NSDictionary;

#import <Foundation/Foundation.h>


@interface MDPathFilterGenerator : NSObject {
    NSMutableDictionary *_namedRoots;
    NSMutableArray *_namedRootArray;
    NSMutableDictionary *_namedRootIndexes;
    NSMutableArray *_auxValueArray;
    int _nextAuxValueIndex;
    BOOL _processExtensions;
    int _auxValueCount;
    NSMutableDictionary *_namedLinkExtensionsDictionary;
    NSDictionary *_namedLinkPrefixesDictionary;
    NSUInteger _atBundleMask;
    NSUInteger _inBundleMask;
    NSUInteger _inheritMask;
    NSUInteger _defaultRule;
    NSUInteger _defaultMask;
    NSUInteger _ignoreMask;
}




-(id)filterDataForMountDepth:(int)arg0 ;
-(id)initWithDefaultFieldsAndValues:(*int)arg0 ignoreFields:(*int)arg1 mappedPrefixes:(id)arg2 hiddenExtensions:(id)arg3 mappedExtensions:(id)arg4 ;
-(struct _MDPlistContainer *)copyFilterMDPlistForMountDepth:(int)arg0 ;
-(void)addMappedExtensions:(id)arg0 ;
-(void)addNamed:(id)arg0 auxValue:(NSUInteger)arg1 forPath:(id)arg2 ;
-(void)addNamed:(id)arg0 field:(int)arg1 value:(int)arg2 forPath:(id)arg3 permitLink:(BOOL)arg4 ;
-(void)addNamed:(id)arg0 field:(int)arg1 value:(int)arg2 hasAuxValue:(BOOL)arg3 auxValue:(NSUInteger)arg4 forPath:(id)arg5 permitLink:(BOOL)arg6 copyParentWildcardLink:(BOOL)arg7 ;
-(void)addRules:(struct ? *)arg0 withPrefix:(id)arg1 ;
-(void)addRules:(struct ? *)arg0 withPrefix:(id)arg1 tableMapping:(id)arg2 ;
-(void)dealloc;
-(void)dump;
-(void)setAtBundleField:(unsigned int)arg0 inBundleField:(unsigned int)arg1 ;


@end


#endif