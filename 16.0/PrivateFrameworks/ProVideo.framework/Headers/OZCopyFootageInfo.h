// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OZCOPYFOOTAGEINFO_H
#define OZCOPYFOOTAGEINFO_H

@class NSMutableDictionary, NSURL, NSSet;

#import <Foundation/Foundation.h>


@interface OZCopyFootageInfo : NSObject

@property (retain, nonatomic) NSMutableDictionary *associatedFilesSourceDestPaths; // ivar: _associatedFilesSourceDestPaths
@property (retain, nonatomic) NSURL *destinationURL; // ivar: _destinationURL
@property (retain, nonatomic) NSSet *nodeIDs; // ivar: _nodeIDs
@property (nonatomic) *void scene; // ivar: _scene
@property (nonatomic) NSUInteger sizeInBytes; // ivar: _sizeInBytes
@property (nonatomic) BOOL sizeIsValid; // ivar: _sizeIsValid
@property (retain, nonatomic) NSURL *sourceURL; // ivar: _sourceURL


+(NSUInteger)fileCount:(id)arg0 ;
+(NSUInteger)totalSizeInBytes:(id)arg0 forceUpdate:(BOOL)arg1 ;
+(id)fileURLToFootageInfoMap:(*void)arg0 includeUnused:(BOOL)arg1 destination:(id)arg2 ;
+(id)fileURLsForNode:(*void)arg0 ;
+(void)reconnectFootage:(id)arg0 scene:(*void)arg1 ;
+(void)updateSizes:(id)arg0 forceUpdate:(BOOL)arg1 ;
-(BOOL)updateSize:(BOOL)arg0 error:(*id)arg1 ;
-(void)dealloc;


@end


#endif