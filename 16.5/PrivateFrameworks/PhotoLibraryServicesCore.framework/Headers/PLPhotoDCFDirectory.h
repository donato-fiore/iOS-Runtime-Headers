// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLPHOTODCFDIRECTORY_H
#define PLPHOTODCFDIRECTORY_H

@class NSMutableDictionary;


#import "PLPhotoDCFObject.h"
#import "PLPhotoDCIMDirectory.h"

@interface PLPhotoDCFDirectory : PLPhotoDCFObject {
    PLPhotoDCIMDirectory *_dcimDirectory;
    NSMutableDictionary *_fileGroupsByNumber;
    int _maxFileGroupNumber;
    int _lastUsedFileGroupNumber;
}


@property BOOL considerInvalidFileGroups; // ivar: _considerInvalidFileGroups


+(id)fileGroupRequiredEmptyExtensions;
+(id)fileGroupRequiredEmptyPrefixes;
+(void)initializeFileGroupPrefixAndExtensions;
-(BOOL)_canAddItemWithPrefix:(id)arg0 ;
-(BOOL)_canAddItemWithPrefix:(id)arg0 minimumFileGroupNumber:(int)arg1 ;
-(BOOL)canAddFileGroupWithGroupNumber:(int)arg0 ;
-(BOOL)canAddImage;
-(BOOL)canAddVideo;
-(BOOL)isEntensionValid:(id)arg0 ;
-(id)_lastUsedFileGroupUserInfoKey;
-(id)_nextAvailableFileGroupWithPrefix:(id)arg0 extension:(id)arg1 ;
-(id)dcimDirectory;
-(id)fileGroups;
-(id)fullPath;
-(id)initWithName:(id)arg0 number:(int)arg1 dcimDirectory:(id)arg2 ;
-(id)nextAvailableFileGroup;
-(id)nextAvailableVideoFileGroupWithExtension:(id)arg0 ;
-(unsigned int)_calculateBaseDirectoryValue;
-(void)ensureDirectoryExists;
-(void)removeFileGroup:(id)arg0 ;
-(void)setWriteIsPending:(BOOL)arg0 ;


@end


#endif