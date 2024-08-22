// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BSDESCRIPTIONSTREAM_H
#define BSDESCRIPTIONSTREAM_H

@class NSMutableString, NSString;
@protocol BSDescriptionStringAppendTarget, BSDescriptionFormatting;

#import <Foundation/Foundation.h>


@interface BSDescriptionStream : NSObject <BSDescriptionStringAppendTarget, BSDescriptionFormatting>

 {
    unsigned char _appendBuffer;
    NSInteger _appendBufferCount;
    NSMutableString *_string;
    NSInteger _indentLevel;
    NSString *_pendingFieldTerminator;
    NSInteger _emitPhase;
    NSInteger _groupItemCount;
    NSInteger _groupVerbosityOptions;
}


@property (nonatomic) BOOL sortKeys; // ivar: _sortKeys
@property (nonatomic) BOOL verboseSingleItemCollections; // ivar: _verboseSingleItemCollections


+(id)descriptionForRootObject:(id)arg0 ;
-(id)appendBool:(BOOL)arg0 withName:(id)arg1 ;
-(id)appendBool:(BOOL)arg0 withName:(id)arg1 ifEqualTo:(BOOL)arg2 ;
-(id)appendCString:(char *)arg0 withName:(id)arg1 ;
-(id)appendClass:(Class)arg0 withName:(id)arg1 ;
-(id)appendDouble:(CGFloat)arg0 withName:(id)arg1 decimalPrecision:(NSUInteger)arg2 ;
-(id)appendFlag:(NSInteger)arg0 withName:(id)arg1 ;
-(id)appendFlag:(NSInteger)arg0 withName:(id)arg1 skipIfNotSet:(BOOL)arg2 ;
-(id)appendFloat:(CGFloat)arg0 withName:(id)arg1 ;
-(id)appendFloat:(CGFloat)arg0 withName:(id)arg1 decimalPrecision:(NSUInteger)arg2 ;
-(id)appendInt64:(NSInteger)arg0 withName:(id)arg1 ;
-(id)appendInt:(int)arg0 withName:(id)arg1 ;
-(id)appendInteger:(NSInteger)arg0 withName:(id)arg1 ;
-(id)appendObject:(id)arg0 withName:(id)arg1 ;
-(id)appendObject:(id)arg0 withName:(id)arg1 skipIfNil:(BOOL)arg2 ;
-(id)appendPoint:(struct CGPoint )arg0 withName:(id)arg1 ;
-(id)appendPointer:(*void)arg0 withName:(id)arg1 ;
-(id)appendQueue:(id)arg0 withName:(id)arg1 ;
-(id)appendRect:(struct CGRect )arg0 withName:(id)arg1 ;
-(id)appendSelector:(SEL)arg0 withName:(id)arg1 ;
-(id)appendSize:(struct CGSize )arg0 withName:(id)arg1 ;
-(id)appendTimeInterval:(CGFloat)arg0 withName:(id)arg1 decomposeUnits:(BOOL)arg2 ;
-(id)appendUInt64:(NSUInteger)arg0 withName:(id)arg1 ;
-(id)appendUInt64:(NSUInteger)arg0 withName:(id)arg1 format:(NSInteger)arg2 ;
-(id)appendUnsignedInt:(unsigned int)arg0 withName:(id)arg1 ;
-(id)appendUnsignedInteger:(NSUInteger)arg0 withName:(id)arg1 ;
-(id)appendUnsignedInteger:(NSUInteger)arg0 withName:(id)arg1 format:(NSInteger)arg2 ;
-(id)appendVersionedPID:(NSInteger)arg0 withName:(id)arg1 ;
-(id)description;
-(id)init;
-(void)appendBodySectionWithName:(id)arg0 block:(id)arg1 ;
-(void)appendBodySectionWithName:(id)arg0 openDelimiter:(id)arg1 closeDelimiter:(id)arg2 block:(id)arg3 ;
-(void)appendBodySectionWithOpenDelimiter:(id)arg0 closeDelimiter:(id)arg1 block:(id)arg2 ;
-(void)appendCollection:(id)arg0 withName:(id)arg1 itemBlock:(id)arg2 ;
-(void)appendCustomFormatWithName:(id)arg0 block:(id)arg1 ;
-(void)appendDictionary:(id)arg0 withName:(id)arg1 itemBlock:(id)arg2 ;
-(void)appendFormat:(id)arg0 ;
-(void)appendProem:(id)arg0 block:(id)arg1 ;
-(void)appendRightArrow;
-(void)appendString:(id)arg0 ;
-(void)appendString:(id)arg0 withName:(id)arg1 ;
-(void)appendString:(id)arg0 withName:(id)arg1 skipIfEmpty:(BOOL)arg2 ;
-(void)sameLine:(id)arg0 ;


@end


#endif