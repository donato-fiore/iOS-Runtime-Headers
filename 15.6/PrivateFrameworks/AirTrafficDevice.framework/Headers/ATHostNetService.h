// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATHOSTNETSERVICE_H
#define ATHOSTNETSERVICE_H

@class NSString, NSNetService;

#import <Foundation/Foundation.h>


@interface ATHostNetService : NSObject

@property (readonly, nonatomic) NSString *libraryIdentifier; // ivar: _libraryIdentifier
@property (readonly, nonatomic) NSNetService *netService; // ivar: _netService


-(id)initWithNetService:(id)arg0 ;


@end


#endif