// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NSPLACEHOLDERCHARACTERSET_H
#define _NSPLACEHOLDERCHARACTERSET_H



#import "NSCharacterSet.h"

@interface _NSPlaceholderCharacterSet : NSCharacterSet {
    NSCharacterSet *_original;
    NSCharacterSet *_invertedSet;
    ? _flags;
}




-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(BOOL)characterIsMember:(unsigned short)arg0 ;
-(BOOL)hasMemberInPlane:(unsigned char)arg0 ;
-(BOOL)isEmpty;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isSupersetOfSet:(id)arg0 ;
-(BOOL)longCharacterIsMember:(unsigned int)arg0 ;
-(NSUInteger)retainCount;
-(id)autorelease;
-(id)bitmapRepresentation;
-(id)initWithSet:(id)arg0 options:(NSUInteger)arg1 ;
-(id)invertedSet;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)replacementObjectForCoder:(id)arg0 ;
-(id)replacementObjectForKeyedArchiver:(id)arg0 ;
-(id)retain;
-(struct __CFCharacterSet *)_expandedCFCharacterSet;
-(void)_expandInverted;
-(void)dealloc;
-(void)release;


@end


#endif