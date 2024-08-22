// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLGREENCONTROLLER_H
#define PLGREENCONTROLLER_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface PLGreenController : NSObject

@property (readonly, nonatomic) NSDictionary *currentGreenValues; // ivar: _currentGreenValues


-(BOOL)greenValuesSimilarToGreenValues:(id)arg0 ;
-(BOOL)isGreenStateValid;
-(id)init;
-(void)readValuesFromDisk;


@end


#endif