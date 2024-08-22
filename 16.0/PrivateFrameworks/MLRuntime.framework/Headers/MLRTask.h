// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLRTASK_H
#define MLRTASK_H

@class DESInternalDodMLTask;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MLRTaskAttachments.h"
#import "MLRTaskParameters.h"

@interface MLRTask : NSObject <NSSecureCoding>



@property (readonly, nonatomic) DESInternalDodMLTask *DESTask; // ivar: _DESTask
@property (readonly, copy, nonatomic) MLRTaskAttachments *attachments; // ivar: _attachments
@property (readonly, nonatomic) MLRTaskParameters *parameters; // ivar: _parameters


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDodMLTask:(id)arg0 ;
-(id)initWithParameters:(id)arg0 attachments:(id)arg1 ;
-(id)initWithParametersDict:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif