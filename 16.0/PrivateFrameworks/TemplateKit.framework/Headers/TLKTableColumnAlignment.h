// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TLKTABLECOLUMNALIGNMENT_H
#define TLKTABLECOLUMNALIGNMENT_H



#import "TLKObject.h"

@interface TLKTableColumnAlignment : TLKObject

@property (nonatomic) NSUInteger columnAlignment; // ivar: _columnAlignment
@property (nonatomic) NSInteger dataAlignment; // ivar: _dataAlignment
@property (nonatomic) BOOL isEqualWidth; // ivar: _isEqualWidth


-(NSInteger)textAlignment;
-(id)description;


@end


#endif