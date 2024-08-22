// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EXOSEXTENSIONENUMERATOR_H
#define EXOSEXTENSIONENUMERATOR_H

@class NSEnumerator, NSArray;



@interface EXOSExtensionEnumerator : NSEnumerator

@property (readonly) NSArray *extensionPaths; // ivar: _extensionPaths
@property (readonly) NSEnumerator *extensionPathsEnumerator; // ivar: _extensionPathsEnumerator


+(void)enumerateExtensionsInDirectoryAtURL:(id)arg0 block:(id)arg1 ;
-(id)initWithCacheURLs:(id)arg0 ;
-(id)initWithCacheURLs:(id)arg0 paths:(id)arg1 ;
-(id)nextObject;


@end


#endif