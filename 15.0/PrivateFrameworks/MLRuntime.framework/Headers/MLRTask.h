// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MLRTASK_H
#define MLRTASK_H

@class DESInternalDodMLTask;

#import <Foundation/Foundation.h>

#import "MLRTaskAttachments.h"
#import "MLRTaskParameters.h"

@interface MLRTask : NSObject

@property (readonly, nonatomic) DESInternalDodMLTask *DESTask; // ivar: _DESTask
@property (readonly, copy, nonatomic) MLRTaskAttachments *attachments; // ivar: _attachments
@property (readonly, nonatomic) MLRTaskParameters *parameters; // ivar: _parameters


-(id)description;
-(id)initWithDodMLTask:(id)arg0 ;
-(id)initWithParameters:(id)arg0 attachments:(id)arg1 ;


@end


#endif