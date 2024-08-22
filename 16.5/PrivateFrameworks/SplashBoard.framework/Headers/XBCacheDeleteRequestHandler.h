// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef XBCACHEDELETEREQUESTHANDLER_H
#define XBCACHEDELETEREQUESTHANDLER_H

@protocol XBApplicationProviding;

#import <Foundation/Foundation.h>


@interface XBCacheDeleteRequestHandler : NSObject

@property (retain, nonatomic) NSObject<XBApplicationProviding> *applicationProvider; // ivar: _applicationProvider


-(id)amountPurgeable:(id)arg0 urgency:(int)arg1 ;
-(id)initWithApplicationProvider:(id)arg0 ;
-(id)performPeriodic:(id)arg0 urgency:(int)arg1 ;
-(id)performPurge:(id)arg0 urgency:(int)arg1 ;


@end


#endif