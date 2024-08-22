// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHSWIDGETHOST_H
#define CHSWIDGETHOST_H

@class NSString;
@protocol CHSChronoWidgetServiceServer;

#import <Foundation/Foundation.h>

#import "CHSWidgetConfiguration.h"

@interface CHSWidgetHost : NSObject {
    id<CHSChronoWidgetServiceServer> *_server;
    BOOL _invalid;
}


@property (copy, nonatomic) CHSWidgetConfiguration *configuration; // ivar: _configuration
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier


+(id)new;
-(id)init;
-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 server:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif