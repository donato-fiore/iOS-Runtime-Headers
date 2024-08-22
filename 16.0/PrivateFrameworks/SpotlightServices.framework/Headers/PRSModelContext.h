// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRSMODELCONTEXT_H
#define PRSMODELCONTEXT_H

@class NSString;

#import <Foundation/Foundation.h>

#import "PRSDirectivesManager.h"
#import "SSCoreMLInterface.h"

@interface PRSModelContext : NSObject

@property (retain, nonatomic) PRSDirectivesManager *directivesManager; // ivar: _directivesManager
@property (retain, nonatomic) SSCoreMLInterface *model; // ivar: _model
@property (nonatomic) NSUInteger type; // ivar: _type
@property (retain, nonatomic) NSString *version; // ivar: _version


-(id)initWithModel:(id)arg0 directivesManager:(id)arg1 type:(NSUInteger)arg2 ;


@end


#endif