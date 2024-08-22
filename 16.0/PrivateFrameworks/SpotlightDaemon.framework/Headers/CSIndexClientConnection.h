// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSINDEXCLIENTCONNECTION_H
#define CSINDEXCLIENTCONNECTION_H


#import <Foundation/Foundation.h>

#import "SDConnectionConfiguration.h"
#import "MDSearchableIndexService.h"

@interface CSIndexClientConnection : NSObject

@property (readonly, nonatomic) SDConnectionConfiguration *configuration; // ivar: _configuration
@property (readonly, nonatomic) BOOL quotaDisabled; // ivar: _quotaDisabled
@property (readonly, nonatomic) MDSearchableIndexService *service; // ivar: _service


-(id)initWithConfiguration:(id)arg0 indexer:(id)arg1 ;
-(id)initWithConnection:(id)arg0 indexer:(id)arg1 ;


@end


#endif