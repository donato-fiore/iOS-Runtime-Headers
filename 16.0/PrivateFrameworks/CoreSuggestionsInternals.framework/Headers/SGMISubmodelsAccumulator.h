// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGMISUBMODELSACCUMULATOR_H
#define SGMISUBMODELSACCUMULATOR_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface SGMISubmodelsAccumulator : NSObject

@property (readonly) NSDictionary *submodels; // ivar: _submodels


-(id)init;
-(void)commitToStore:(id)arg0 updateDate:(id)arg1 ;
-(void)ingest:(id)arg0 asSalient:(BOOL)arg1 ;


@end


#endif