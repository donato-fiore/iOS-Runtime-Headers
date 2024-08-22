// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSDIRECTORYENUMERATOR_H
#define NSDIRECTORYENUMERATOR_H

@class NSEnumerator, NSDictionary;



@interface NSDirectoryEnumerator : NSEnumerator

@property (readonly, copy) NSDictionary *directoryAttributes;
@property (readonly, copy) NSDictionary *fileAttributes;
@property (readonly) BOOL isEnumeratingDirectoryPostOrder;
@property (readonly) NSUInteger level;


-(id)nextObject;
-(void)skipDescendants;
-(void)skipDescendents;


@end


#endif