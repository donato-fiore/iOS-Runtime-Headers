// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSSERVICEMONITOR_H
#define IDSSERVICEMONITOR_H

@class NSString;

#import <Foundation/Foundation.h>


@interface IDSServiceMonitor : NSObject {
    NSInteger _availability;
    NSString *_service;
    int _token;
}


@property (readonly, nonatomic) NSString *service;


-(id)description;
-(id)initWithService:(id)arg0 ;
-(void)_postAvailability:(NSInteger)arg0 ;
-(void)_updateAvailability;
-(void)dealloc;
-(void)updateAvailability;


@end


#endif