// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCEFORMULAREWRITEINFO_RANGEENTRY_H
#define TSCEFORMULAREWRITEINFO_RANGEENTRY_H


#import <Foundation/Foundation.h>


@interface TSCEFormulaRewriteInfo_RangeEntry : NSObject

@property unsigned int offset; // ivar: _offset
@property (readonly) *void orderedUuids; // ivar: _orderedUuids
@property (readonly) _NSRange range; // ivar: _range


-(id)initFromMessage:(*void)arg0 ;
-(id)initWithRange:(struct _NSRange )arg0 orderedUuids:(*void)arg1 offset:(unsigned int)arg2 ;
-(void)saveToMessage:(*void)arg0 ;


@end


#endif