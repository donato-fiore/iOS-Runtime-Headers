// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PFABSTRACTSTRING_H
#define _PFABSTRACTSTRING_H

@class NSString;



@interface _PFAbstractString : NSString



+(BOOL)accessInstanceVariablesDirectly;
+(Class)classForKeyedUnarchiver;
+(id)alloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(*unsigned short)_fastCharacterContents;
-(Class)classForCoder;
-(NSUInteger)fastestEncoding;
-(NSUInteger)smallestEncoding;
-(char *)_fastCStringContents:(BOOL)arg0 ;
-(char *)cString;
-(char *)cStringUsingEncoding:(NSUInteger)arg0 ;
-(id)description;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)dealloc;


@end


#endif