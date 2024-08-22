// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLBBTELEPHONYDSDSREGMSG_H
#define PLBBTELEPHONYDSDSREGMSG_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PLBBTelephonyDsdsRegMsg : NSObject

@property int dataActive; // ivar: _dataActive
@property int dataAttached; // ivar: _dataAttached
@property int dataIndicator; // ivar: _dataIndicator
@property int isHome; // ivar: _isHome
@property (retain) NSString *operatorName; // ivar: _operatorName
@property int serviceOpt; // ivar: _serviceOpt
@property (retain) NSString *status; // ivar: _status


-(id)init;


@end


#endif