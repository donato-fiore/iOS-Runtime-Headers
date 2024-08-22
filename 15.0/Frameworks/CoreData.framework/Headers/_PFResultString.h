// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PFRESULTSTRING_H
#define _PFRESULTSTRING_H

@class PFAbstractString;



@interface _PFResultString : PFAbstractString {
    id *_parentObject;
}




+(NSUInteger)bufferOffset;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(NSUInteger)retainCount;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)retain;
-(void)dealloc;
-(void)release;


@end


#endif