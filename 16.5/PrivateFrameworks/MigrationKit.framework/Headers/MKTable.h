// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKTABLE_H
#define MKTABLE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface MKTable : NSObject

@property (retain, nonatomic) NSMutableArray *columns; // ivar: _columns
@property (retain, nonatomic) NSMutableArray *rows; // ivar: _rows


-(id)init;
-(void)addRow:(id)arg0 ;
-(void)writeToDisk:(id)arg0 ;
-(void)writeToLog;


@end


#endif