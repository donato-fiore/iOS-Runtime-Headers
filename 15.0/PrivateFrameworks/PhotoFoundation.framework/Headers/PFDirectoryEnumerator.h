// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFDIRECTORYENUMERATOR_H
#define PFDIRECTORYENUMERATOR_H

@class NSEnumerator, NSMutableArray, NSString;
@protocol NSCopying, PFFileFilter;



@interface PFDirectoryEnumerator : NSEnumerator <NSCopying>

 {
    *? _DIR;
    BOOL _recursive;
    NSMutableArray *_recursiveDirArray;
    int _recursionMode;
    BOOL _enumerationFinished;
}


@property (readonly, nonatomic) int fileType; // ivar: _fileType
@property (readonly, nonatomic) NSObject<PFFileFilter> *filterDelegate; // ivar: _filterDelegate
@property (readonly, nonatomic) int options; // ivar: _options
@property (readonly, nonatomic) NSString *path; // ivar: _path


-(id)allObjects;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithPath:(id)arg0 ;
-(id)initWithPath:(id)arg0 filterDelegate:(id)arg1 ;
-(id)initWithPath:(id)arg0 filterDelegate:(id)arg1 fileType:(int)arg2 ;
-(id)initWithPath:(id)arg0 filterDelegate:(id)arg1 fileType:(int)arg2 recursive:(BOOL)arg3 mode:(int)arg4 options:(int)arg5 ;
-(id)initWithPath:(id)arg0 recursive:(BOOL)arg1 ;
-(id)nextObject;
-(void)dealloc;


@end


#endif