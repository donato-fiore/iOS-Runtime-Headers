// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGSERVICECONTEXT_H
#define SGSERVICECONTEXT_H


#import <Foundation/Foundation.h>

#import "SGSqlEntityStore.h"

@interface SGServiceContext : NSObject

@property (readonly, nonatomic) SGSqlEntityStore *store; // ivar: _store


-(id)init;
-(id)initWithStore:(id)arg0 ;


@end


#endif