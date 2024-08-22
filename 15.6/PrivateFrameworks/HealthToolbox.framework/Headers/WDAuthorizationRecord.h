// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WDAUTHORIZATIONRECORD_H
#define WDAUTHORIZATIONRECORD_H

@class _HKAuthorizationRecord;

#import <Foundation/Foundation.h>


@interface WDAuthorizationRecord : NSObject {
    _HKAuthorizationRecord *_internalAuthorizationRecord;
}


@property NSInteger status; // ivar: _status


-(BOOL)requestedReading;
-(BOOL)requestedSharing;
-(id)init;
-(id)initWithInternalAuthorizationRecord:(id)arg0 ;


@end


#endif