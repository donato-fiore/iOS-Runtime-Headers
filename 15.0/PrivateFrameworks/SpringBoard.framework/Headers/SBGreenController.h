// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBGREENCONTROLLER_H
#define SBGREENCONTROLLER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface SBGreenController : NSObject {
    NSArray *_relevantGreenKeys;
    NSUInteger _fileExistenceState;
}




-(BOOL)_writeGreenValuesToDisk:(id)arg0 withState:(NSUInteger)arg1 ;
-(NSUInteger)_effectivePlaceIsAmbiguous:(*BOOL)arg0 ;
-(id)_defaultValuesDictionaryAndState:(*NSUInteger)arg0 ;
-(id)_deviceRegionCode;
-(id)init;
-(void)_readFileStateFromDisk;
-(void)performPreBuddyWork;


@end


#endif