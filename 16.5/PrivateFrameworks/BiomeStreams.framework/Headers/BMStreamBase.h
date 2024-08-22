// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMSTREAMBASE_H
#define BMSTREAMBASE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "BMStreamConfiguration.h"
#import "BMSQLSchema.h"
#import "BMStoreStream.h"

@interface BMStreamBase : NSObject {
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) BMStreamConfiguration *configuration; // ivar: _configuration
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BMSQLSchema *schema; // ivar: _schema
@property (readonly, nonatomic) BMStoreStream *storeStream; // ivar: _storeStream


-(BOOL)isEqual:(id)arg0 ;
-(id)DSLPublisher;
-(id)initWithIdentifier:(id)arg0 schema:(id)arg1 configuration:(id)arg2 ;
-(id)pruner;
-(id)publisher;
-(id)publisherWithOptions:(id)arg0 ;
-(id)source;


@end


#endif