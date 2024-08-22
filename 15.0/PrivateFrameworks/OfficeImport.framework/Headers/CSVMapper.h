// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSVMAPPER_H
#define CSVMAPPER_H

@class NSMutableArray, NSString;


#import "CMMapper.h"

@interface CSVMapper : CMMapper {
    NSMutableArray *mRows;
    NSString *mFileName;
    NSUInteger mColumnCount;
    CGSize mPageSize;
}




-(id)initWithRows:(id)arg0 fileName:(id)arg1 columnCount:(NSUInteger)arg2 archiver:(id)arg3 ;
-(struct CGSize )pageSize;
-(void)mapAt:(id)arg0 withState:(id)arg1 ;


@end


#endif