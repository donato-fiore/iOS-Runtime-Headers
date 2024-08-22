// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHPOSTPROCESSINGMANAGER_H
#define CHPOSTPROCESSINGMANAGER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface CHPostProcessingManager : NSObject

@property (retain, nonatomic) NSArray *sequence; // ivar: _sequence


-(id)init;
-(id)initWithSequence:(id)arg0 ;
-(id)initWithStep:(id)arg0 ;
-(id)process:(id)arg0 options:(id)arg1 ;


@end


#endif