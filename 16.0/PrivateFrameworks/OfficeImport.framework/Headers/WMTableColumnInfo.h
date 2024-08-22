// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WMTABLECOLUMNINFO_H
#define WMTABLECOLUMNINFO_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface WMTableColumnInfo : NSObject {
    NSMutableArray *mStopArray;
}




-(NSUInteger)count;
-(float)stopAt:(unsigned int)arg0 ;
-(id)initWithStopArray:(id)arg0 ;
-(unsigned int)columnSpan:(float)arg0 at:(unsigned int)arg1 ;
-(void)mergeStopArray:(id)arg0 ;


@end


#endif