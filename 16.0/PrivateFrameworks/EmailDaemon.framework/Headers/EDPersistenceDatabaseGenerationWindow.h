// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDPERSISTENCEDATABASEGENERATIONWINDOW_H
#define EDPERSISTENCEDATABASEGENERATIONWINDOW_H


#import <Foundation/Foundation.h>


@interface EDPersistenceDatabaseGenerationWindow : NSObject

@property (readonly, nonatomic) NSInteger earliestGeneration; // ivar: _earliestGeneration
@property (readonly, nonatomic) NSInteger latestGeneration; // ivar: _latestGeneration


-(id)init;
-(void)insertGeneration:(NSInteger)arg0 ;


@end


#endif