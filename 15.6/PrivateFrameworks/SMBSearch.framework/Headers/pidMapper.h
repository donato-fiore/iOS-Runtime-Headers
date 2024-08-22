// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PIDMAPPER_H
#define PIDMAPPER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface pidMapper : NSObject

@property (retain) NSMutableArray *colTableArr; // ivar: _colTableArr
@property unsigned int colValueLen; // ivar: _colValueLen
@property (retain) NSMutableArray *columnSet; // ivar: _columnSet
@property (retain) NSMutableArray *pidMap; // ivar: _pidMap
@property unsigned int rowLength; // ivar: _rowLength


-(id)initWithCtx:(id)arg0 ;


@end


#endif