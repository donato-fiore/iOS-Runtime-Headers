// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OADTABLEGRID_H
#define OADTABLEGRID_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface OADTableGrid : NSObject {
    NSMutableArray *mColumns;
}




-(NSUInteger)columnCount;
-(id)addColumn;
-(id)columnAtIndex:(NSUInteger)arg0 ;
-(id)description;
-(id)init;
-(void)flipColumnsRTL;


@end


#endif