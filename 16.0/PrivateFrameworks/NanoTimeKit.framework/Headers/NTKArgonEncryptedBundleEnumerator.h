// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKARGONENCRYPTEDBUNDLEENUMERATOR_H
#define NTKARGONENCRYPTEDBUNDLEENUMERATOR_H

@class NSEnumerator, NSArray, NSURL;



@interface NTKArgonEncryptedBundleEnumerator : NSEnumerator {
    NSArray *_allObjects;
    NSEnumerator *_urlEnumerator;
    NSURL *_lastURL;
}


@property (readonly, copy) NSArray *allObjects;


-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)initWithSearchPathDomains:(NSUInteger)arg0 ;
-(id)initWithSourceDirectoryPaths:(id)arg0 ;
-(id)initWithSourceDirectoryURLs:(id)arg0 ;
-(id)nextObject;


@end


#endif