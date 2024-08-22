// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCPERSISTENTDICTIONARY_H
#define FCPERSISTENTDICTIONARY_H

@class NSSet, NSURL;

#import <Foundation/Foundation.h>


@interface FCPersistentDictionary : NSObject

@property (readonly, copy, nonatomic) NSSet *allowedClasses; // ivar: _allowedClasses
@property (readonly, copy, nonatomic) NSURL *fileURL; // ivar: _fileURL


-(BOOL)writeWithAccessor:(id)arg0 ;
-(id)init;
-(id)initWithFileURL:(id)arg0 allowedClasses:(id)arg1 ;
-(id)read;


@end


#endif