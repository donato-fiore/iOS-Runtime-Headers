// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBFDATACOMPONENTOBJECTENTITY_H
#define PBFDATACOMPONENTOBJECTENTITY_H

@class NSString;

#import <Foundation/Foundation.h>

#import "PBFDataRefreshContext.h"

@interface PBFDataComponentObjectEntity : NSObject

@property (readonly, nonatomic) NSString *component; // ivar: _component
@property (readonly, nonatomic) PBFDataRefreshContext *context; // ivar: _context
@property (readonly, nonatomic) id *object; // ivar: _object


-(id)description;
-(id)determineRefreshState;
-(id)initWithComponent:(id)arg0 object:(id)arg1 context:(id)arg2 ;


@end


#endif