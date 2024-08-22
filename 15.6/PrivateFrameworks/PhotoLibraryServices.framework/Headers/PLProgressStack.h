// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLPROGRESSSTACK_H
#define PLPROGRESSSTACK_H

@class NSString, NSMutableArray;

#import <Foundation/Foundation.h>


@interface PLProgressStack : NSObject

@property (nonatomic) float currentMultiplier; // ivar: currentMultiplier
@property (nonatomic) float currentTotal; // ivar: currentTotal
@property (weak, nonatomic) id *delegate; // ivar: delegate
@property (retain, nonatomic) NSString *mediaPathString; // ivar: mediaPathString
@property (retain, nonatomic) NSMutableArray *multipliers; // ivar: multipliers
@property (nonatomic) BOOL notifyUsingAssetsdNotificationCenter; // ivar: notifyUsingAssetsdNotificationCenter


+(id)unarchiveFromDictionary:(id)arg0 ;
-(float)totalProgress:(float)arg0 ;
-(id)archiveToDictionary;
-(id)initWithDelegate:(id)arg0 ;
-(void)pop;
-(void)popAndUpdate;
-(void)push:(float)arg0 ;
-(void)setCurrentMediaPath:(id)arg0 ;
-(void)updateProgress:(float)arg0 ;


@end


#endif