// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRLATTICERUN_H
#define CRLATTICERUN_H

@class NSArray, NSMutableArray;

#import <Foundation/Foundation.h>


@interface CRLatticeRun : NSObject

@property (readonly, nonatomic) NSArray *graphEdges; // ivar: _graphEdges
@property (retain, nonatomic) NSMutableArray *mutablePaths; // ivar: _mutablePaths
@property (readonly, nonatomic) NSArray *paths;
@property (readonly) CGRect rect; // ivar: _rect


-(id)initWithRect:(struct CGRect )arg0 ;
-(void)appendPath:(id)arg0 ;
-(void)setGraph:(id)arg0 ;


@end


#endif