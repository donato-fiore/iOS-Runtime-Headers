// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FTCSERVICEMONITOR_H
#define FTCSERVICEMONITOR_H


#import <Foundation/Foundation.h>


@interface FTCServiceMonitor : NSObject {
    NSInteger _availability;
    NSInteger _type;
    int _token;
}


@property (readonly, nonatomic) NSInteger serviceType;


-(NSInteger)serviceAvailability;
-(id)initWithServiceType:(NSInteger)arg0 ;
-(void)_postAvailability:(NSInteger)arg0 ;
-(void)_updateAvailability;
-(void)dealloc;
-(void)updateAvailability;


@end


#endif