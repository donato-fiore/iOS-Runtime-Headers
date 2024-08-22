// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFAPPEXPERIENCE_H
#define SFAPPEXPERIENCE_H

@class NSManagedObject, NSDate;


#import "SFApp.h"

@interface SFAppExperience : NSManagedObject

@property (nonatomic) int algosSamples;
@property (nonatomic) CGFloat algosScore;
@property (copy, nonatomic) NSDate *firstTimeStamp;
@property (retain, nonatomic) SFApp *hasApp;
@property (copy, nonatomic) NSDate *timeStamp;


+(id)entityName;
+(id)fetchRequest;


@end


#endif