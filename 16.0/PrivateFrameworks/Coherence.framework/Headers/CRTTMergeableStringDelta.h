// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRTTMERGEABLESTRINGDELTA_H
#define CRTTMERGEABLESTRINGDELTA_H

@protocol CRTTMergeableStringStorage;

#import <Foundation/Foundation.h>

#import "ObjCVersion.h"

@interface CRTTMergeableStringDelta : NSObject {
    vector<TopoSubstring *, std::allocator<TopoSubstring *>> orderedSubstrings;
}


@property (retain, nonatomic) ObjCVersion *addedByVersion; // ivar: _addedByVersion
@property (readonly, nonatomic) NSObject<CRTTMergeableStringStorage> *attributedString; // ivar: _attributedString
@property (retain, nonatomic) ObjCVersion *fromAddedByVersion; // ivar: _fromAddedByVersion
@property (retain, nonatomic) ObjCVersion *fromVersion; // ivar: _fromVersion
@property (nonatomic) NSInteger renameGeneration; // ivar: _renameGeneration
@property (retain, nonatomic) ObjCVersion *version; // ivar: _version


-(*void)addSubstring:(struct TopoIDRange *)arg0 requiresExactLength:(BOOL)arg1 deltaCharMap:(*void)arg2 ;
-(*void)orderedSubstrings;
-(BOOL)saveToEncoder:(id)arg0 error:(*id)arg1 ;
-(id)dotDescription:(NSUInteger)arg0 ;
-(id)initWithDecoder:(id)arg0 error:(*id)arg1 ;
-(id)initWithDeltasTo:(id)arg0 from:(id)arg1 compareElements:(id)arg2 ;
-(void)addChildTo:(*void)arg0 child:(*void)arg1 deltaCharMap:(*void)arg2 ;
-(void)addStorageTo:(*void)arg0 fromStorage:(id)arg1 range:(struct _NSRange )arg2 ;
-(void)compareSameSubstring:(*void)arg0 toSubstring:(*void)arg1 from:(id)arg2 toString:(id)arg3 charMap:(*void)arg4 deltaCharMap:(*void)arg5 compareElements:(id)arg6 ;
-(void)compareSubstring:(*void)arg0 toSubstring:(*void)arg1 fromString:(id)arg2 toString:(id)arg3 charMap:(*void)arg4 deltaCharMap:(*void)arg5 compareElements:(id)arg6 ;
-(void)dealloc;
-(void)findAndCompareSubstring:(*void)arg0 from:(id)arg1 toString:(id)arg2 charMap:(*void)arg3 deltaCharMap:(*void)arg4 compareElements:(id)arg5 ;


@end


#endif