// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VMUCLASSINFOMAP_H
#define VMUCLASSINFOMAP_H

@class NSMutableArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface VMUClassInfoMap : NSObject <NSSecureCoding>

 {
    *void _classInfoMap1;
    *void _classInfoMap2;
    NSMutableArray *_linearClassInfos;
    *void _fieldInfoMap1;
    *void _fieldInfoMap2;
    NSMutableArray *_linearFieldInfos;
}


@property (readonly, nonatomic) unsigned int count;
@property (readonly, nonatomic) unsigned int fieldInfoCount;
@property (readonly, nonatomic) BOOL hasClassInfosDerivedFromStackBacktraces;


+(BOOL)supportsSecureCoding;
+(void)_destroyRetainedLinearArray:(*id)arg0 withCount:(unsigned int)arg1 ;
+(void)initialize;
-(*id)_retainedLinearArrayWithReturnedCount:(*unsigned int)arg0 ;
-(id)classInfoForAddress:(NSUInteger)arg0 ;
-(id)classInfoForIndex:(unsigned int)arg0 ;
-(id)fieldInfoForIndex:(unsigned int)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)swiftFieldWithName:(char *)arg0 offset:(unsigned int)arg1 kind:(unsigned int)arg2 typeref:(struct swift_typeref_interop )arg3 ;
-(unsigned int)addClassInfo:(id)arg0 forAddress:(NSUInteger)arg1 ;
-(unsigned int)addFieldInfo:(id)arg0 ;
-(unsigned int)indexForClassInfo:(id)arg0 ;
-(unsigned int)indexForFieldInfo:(id)arg0 ;
-(void)_applyTypeOverlay:(id)arg0 ;
-(void)addClassInfosFromMap:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateInfosWithBlock:(id)arg0 ;
-(void)memoizeSwiftField:(id)arg0 withName:(char *)arg1 offset:(unsigned int)arg2 kind:(unsigned int)arg3 typeref:(struct swift_typeref_interop )arg4 ;


@end


#endif