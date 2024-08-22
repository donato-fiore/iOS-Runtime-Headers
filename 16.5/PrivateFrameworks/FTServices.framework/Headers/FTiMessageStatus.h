// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTIMESSAGESTATUS_H
#define FTIMESSAGESTATUS_H


#import <Foundation/Foundation.h>

#import "FTServiceStatus.h"

@interface FTiMessageStatus : NSObject

@property (readonly, nonatomic) BOOL iMessageSupported;
@property (readonly, nonatomic) FTServiceStatus *serviceStatus; // ivar: _serviceStatus


+(id)sharedInstance;
-(id)initPrivate;


@end


#endif