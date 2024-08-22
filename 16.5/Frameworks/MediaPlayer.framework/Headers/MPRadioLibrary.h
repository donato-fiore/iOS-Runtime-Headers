// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPRADIOLIBRARY_H
#define MPRADIOLIBRARY_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "MPRadioController.h"

@interface MPRadioLibrary : NSObject {
    MPRadioController *_radioController;
}


@property (readonly, nonatomic) BOOL isEnabled;
@property (readonly, nonatomic) NSUInteger stationCount;
@property (readonly, nonatomic) NSArray *stations;


+(id)defaultRadioLibrary;
-(id)_radioModel;
-(id)init;
-(id)stationWithIdentifier:(NSInteger)arg0 ;
-(void)_radioAvailabilityDidChangeNotification:(id)arg0 ;
-(void)_radioModelDidChangeNotification:(id)arg0 ;
-(void)_radioRecentStationsDidChangeNotification:(id)arg0 ;
-(void)dealloc;
-(void)getRecentStationGroupsWithCompletionHandler:(id)arg0 ;


@end


#endif