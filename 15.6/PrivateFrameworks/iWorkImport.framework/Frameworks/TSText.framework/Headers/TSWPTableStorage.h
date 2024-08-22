// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSWPTABLESTORAGE_H
#define TSWPTABLESTORAGE_H



#import "TSWPStorage.h"

@interface TSWPTableStorage : TSWPStorage



-(id)initWithContext:(id)arg0 string:(id)arg1 kind:(unsigned char)arg2 stylesheet:(id)arg3 paragraphStyle:(id)arg4 listStyle:(id)arg5 section:(id)arg6 columnStyle:(id)arg7 paragraphDirection:(int)arg8 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)nonUndoableRebuildCellAttributes:(*void)arg0 ;


@end


#endif