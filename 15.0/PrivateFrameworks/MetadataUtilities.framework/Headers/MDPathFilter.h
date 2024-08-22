// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MDPATHFILTER_H
#define MDPATHFILTER_H


#import <Foundation/Foundation.h>


@interface MDPathFilter : NSObject {
    *_MDPlistContainer _plist;
    *? _commonValues;
    ? _rootArray;
    ? _prefixesDictionary;
    ? _extensionsDictionary;
    ? _hiddenExtensionsDictionary;
    *? _rootElement;
    unsigned short _mountDepth;
    NSUInteger _defaultRule;
    NSUInteger _inheritMask;
    BOOL _processExtensions;
    int _auxValueCount;
    *NSUInteger _auxValues;
    int _leadingDotType;
    int _leadingDotIndex;
    int _icloudDotType;
    int _icloudDotIndex;
    BOOL _isDataROSP;
}




-(*NSUInteger)filterSubAuxValues:(struct ? )arg0 count:(*int)arg1 ;
-(BOOL)isDataROSP;
-(NSUInteger)trimBundlePath:(struct ? )arg0 path:(char *)arg1 buffer:(char *)arg2 length:(NSUInteger)arg3 ;
-(id)data;
-(id)initWithData:(id)arg0 ;
-(id)initWithMDPlist:(struct _MDPlistContainer *)arg0 ;
-(struct ? )filter:(char *)arg0 allowBundleCheck:(BOOL)arg1 ;
-(struct ? )filterFullPath:(char *)arg0 ;
-(struct ? )filterFullPathTestBundle:(char *)arg0 ;
-(struct ? )filterPartialPath:(char *)arg0 ;
-(struct ? )iCloudPath:(char *)arg0 updateFilter:(struct ? )arg1 ;
-(struct _MDPlistContainer *)plist;
-(void)dealloc;


@end


#endif