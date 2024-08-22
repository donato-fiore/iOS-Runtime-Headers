// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ROWVARIANT_H
#define ROWVARIANT_H

@class NSString, NSMutableArray;

#import <Foundation/Foundation.h>


@interface rowVariant : NSObject

@property int int4Val; // ivar: _int4Val
@property unsigned char reserved1; // ivar: _reserved1
@property unsigned int reserved2; // ivar: _reserved2
@property (retain) NSString *strValue; // ivar: _strValue
@property timespec timeSpec; // ivar: _timeSpec
@property unsigned int uint4Val; // ivar: _uint4Val
@property NSUInteger uint64Val; // ivar: _uint64Val
@property short vType; // ivar: _vType
@property (retain) NSMutableArray *vector; // ivar: _vector
@property NSUInteger vectorCount; // ivar: _vectorCount


-(id)init;
-(int)decodeBuffer:(id)arg0 BaseOffset:(unsigned int)arg1 RowStart:(unsigned int)arg2 ValueOffset:(unsigned int)arg3 ValueLen:(unsigned int)arg4 Use64bit:(BOOL)arg5 ;
-(int)utf16StrLen:(id)arg0 Offset:(NSUInteger)arg1 Result:(*unsigned int)arg2 ;


@end


#endif