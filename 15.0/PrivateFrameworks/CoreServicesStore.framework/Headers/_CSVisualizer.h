// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CSVISUALIZER_H
#define _CSVISUALIZER_H

@class NSMutableDictionary, NSRecursiveLock;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _CSVisualizer : NSObject <NSCopying>

 {
    NSMutableDictionary *_functions;
    NSRecursiveLock *_lock;
}


@property (readonly) *__CSStore store; // ivar: _store
@property (readonly) NSMutableDictionary *userInfo; // ivar: _userInfo


+(BOOL)getUnit:(*unsigned int)arg0 inTable:(*unsigned int)arg1 fromURL:(id)arg2 ;
+(BOOL)unitDescription:(id)arg0 referencesUnit:(unsigned int)arg1 inTable:(unsigned int)arg2 ;
+(id)URLForUnit:(unsigned int)arg0 inTable:(unsigned int)arg1 ;
+(id)new;
+(id)predicateForSearchingDescriptionWithString:(id)arg0 error:(*id)arg1 ;
+(struct _NSRange )rangeOfValueForTitle:(id)arg0 inDescription:(id)arg1 ;
+(void)breakDownTable:(struct Table *)arg0 inStore:(*void)arg1 buffer:(char *)arg2 ;
+(void)enumerateReferencesToUnitsInUnitDescription:(id)arg0 block:(id)arg1 ;
+(void)enumerateValuesForTitlesInDescription:(id)arg0 block:(id)arg1 ;
-(id)breakDownUsage;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionOfUnit:(unsigned int)arg0 inTable:(unsigned int)arg1 ;
-(id)functionsForTable:(unsigned int)arg0 ;
-(id)functionsForTableNoCopy:(unsigned int)arg0 ;
-(id)handlerForTable:(SEL)arg0 ;
-(id)init;
-(id)initWithStore:(struct __CSStore *)arg0 ;
-(id)initWithStore:(struct __CSStore *)arg0 useStandardTableFunctions:(BOOL)arg1 ;
-(id)initWithStore:(struct __CSStore *)arg0 useStandardTableHandlers:(BOOL)arg1 ;
-(id)summaryOfUnit:(unsigned int)arg0 inTable:(unsigned int)arg1 ;
-(void)dealloc;
-(void)enumerateReferencesToUnit:(unsigned int)arg0 inTable:(unsigned int)arg1 block:(id)arg2 ;
-(void)setFunctions:(id)arg0 forTable:(unsigned int)arg1 ;
// -(void)setHandler:(id)arg0 forTable:(unk)arg1  ;
-(void)setStandardTableFunctions;
-(void)setStandardTableHandlers;


@end


#endif