// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BSDESCRIPTIONBUILDER_H
#define BSDESCRIPTIONBUILDER_H

@class NSMutableString, NSString;
@protocol BSDescriptionFormatting, NSObject;

#import <Foundation/Foundation.h>


@interface BSDescriptionBuilder : NSObject <BSDescriptionFormatting>

 {
    id<NSObject> *_object;
    NSMutableString *_proem;
    NSMutableString *_description;
}


@property (nonatomic) int activeComponent; // ivar: _activeComponent
@property (retain, nonatomic) NSString *activeMultilinePrefix; // ivar: _activePrefix
@property (nonatomic) BOOL useDebugDescription; // ivar: _useDebugDescription


+(id)builderWithObject:(id)arg0 ;
+(id)componentSeparator;
+(id)descriptionForObject:(id)arg0 ;
+(id)descriptionForObject:(id)arg0 withObjectsAndNames:(id)arg1 ;
+(id)nameObjectSeparator;
+(id)succinctDescriptionForObject:(id)arg0 ;
-(id)appendBool:(BOOL)arg0 withName:(id)arg1 ;
-(id)appendBool:(BOOL)arg0 withName:(id)arg1 ifEqualTo:(BOOL)arg2 ;
-(id)appendCString:(char *)arg0 withName:(id)arg1 ;
-(id)appendClass:(Class)arg0 withName:(id)arg1 ;
-(id)appendDouble:(CGFloat)arg0 withName:(id)arg1 decimalPrecision:(NSUInteger)arg2 ;
-(id)appendFlag:(NSInteger)arg0 withName:(id)arg1 ;
-(id)appendFlag:(NSInteger)arg0 withName:(id)arg1 skipIfNotSet:(BOOL)arg2 ;
-(id)appendFloat:(CGFloat)arg0 withName:(id)arg1 ;
-(id)appendFloat:(CGFloat)arg0 withName:(id)arg1 decimalPrecision:(NSUInteger)arg2 ;
-(id)appendFormat:(id)arg0 ;
-(id)appendInt64:(NSInteger)arg0 withName:(id)arg1 ;
-(id)appendInt:(int)arg0 withName:(id)arg1 ;
-(id)appendInteger:(NSInteger)arg0 withName:(id)arg1 ;
-(id)appendKey:(id)arg0 ;
-(id)appendKeys:(id)arg0 ;
-(id)appendObject:(id)arg0 withName:(id)arg1 ;
-(id)appendObject:(id)arg0 withName:(id)arg1 skipIfNil:(BOOL)arg2 ;
-(id)appendObjectsAndNames:(id)arg0 ;
-(id)appendPoint:(struct CGPoint )arg0 withName:(id)arg1 ;
-(id)appendPointer:(*void)arg0 withName:(id)arg1 ;
-(id)appendQueue:(id)arg0 withName:(id)arg1 ;
-(id)appendRect:(struct CGRect )arg0 withName:(id)arg1 ;
-(id)appendSelector:(SEL)arg0 withName:(id)arg1 ;
-(id)appendSize:(struct CGSize )arg0 withName:(id)arg1 ;
-(id)appendString:(id)arg0 ;
-(id)appendSuper;
-(id)appendTimeInterval:(CGFloat)arg0 withName:(id)arg1 decomposeUnits:(BOOL)arg2 ;
-(id)appendUInt64:(NSUInteger)arg0 withName:(id)arg1 ;
-(id)appendUInt64:(NSUInteger)arg0 withName:(id)arg1 format:(NSInteger)arg2 ;
-(id)appendUnsignedInt:(unsigned int)arg0 withName:(id)arg1 ;
-(id)appendUnsignedInteger:(NSUInteger)arg0 withName:(id)arg1 ;
-(id)appendUnsignedInteger:(NSUInteger)arg0 withName:(id)arg1 format:(NSInteger)arg2 ;
-(id)appendVersionedPID:(NSInteger)arg0 withName:(id)arg1 ;
-(id)build;
-(id)initWithObject:(id)arg0 ;
-(id)modifyBody:(id)arg0 ;
-(id)modifyProem:(id)arg0 ;
-(void)appendArraySection:(id)arg0 withName:(id)arg1 multilinePrefix:(id)arg2 skipIfEmpty:(BOOL)arg3 ;
-(void)appendArraySection:(id)arg0 withName:(id)arg1 multilinePrefix:(id)arg2 skipIfEmpty:(BOOL)arg3 objectTransformer:(id)arg4 ;
-(void)appendArraySection:(id)arg0 withName:(id)arg1 skipIfEmpty:(BOOL)arg2 ;
-(void)appendArraySection:(id)arg0 withName:(id)arg1 skipIfEmpty:(BOOL)arg2 objectTransformer:(id)arg3 ;
-(void)appendBodySectionWithName:(id)arg0 multilinePrefix:(id)arg1 block:(id)arg2 ;
-(void)appendCustomFormatWithName:(id)arg0 block:(id)arg1 ;
-(void)appendDictionarySection:(id)arg0 withName:(id)arg1 multilinePrefix:(id)arg2 skipIfEmpty:(BOOL)arg3 ;
-(void)appendDictionarySection:(id)arg0 withName:(id)arg1 multilinePrefix:(id)arg2 skipIfEmpty:(BOOL)arg3 objectTransformer:(id)arg4 ;
-(void)appendDictionarySection:(id)arg0 withName:(id)arg1 skipIfEmpty:(BOOL)arg2 ;
-(void)appendProem:(id)arg0 block:(id)arg1 ;
-(void)appendString:(id)arg0 withName:(id)arg1 ;
-(void)appendString:(id)arg0 withName:(id)arg1 skipIfEmpty:(BOOL)arg2 ;


@end


#endif