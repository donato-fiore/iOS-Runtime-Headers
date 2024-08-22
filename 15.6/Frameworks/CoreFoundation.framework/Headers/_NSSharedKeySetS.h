// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NSSHAREDKEYSETS_H
#define _NSSHAREDKEYSETS_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "_NSSharedKeySetS.h"

@interface _NSSharedKeySetS : NSObject <NSCopying>

 {
    char * _g;
    unsigned char _select;
    *void _rankTable;
    CGFloat _c;
    unsigned int _M;
    unsigned int _factor;
    unsigned int _numKey;
    *unsigned int _seeds;
    *unsigned short _keys1;
    *unsigned short _keys2;
    *unsigned short _keys3;
    *unsigned char _ckeys;
    _NSSharedKeySetS *_subSharedKeySet;
    unsigned int _keyLen;
    unsigned int _type;
}




-(BOOL)isEmpty;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)indexForBytes:(char *)arg0 length:(NSUInteger)arg1 ;
-(NSUInteger)indexForKey:(*unsigned short)arg0 length:(NSUInteger)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)dealloc;


@end


#endif