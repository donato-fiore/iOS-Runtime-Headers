// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCMCONTAINERSCHEMAACTIONSTOPBACKUPEXCLUDE_H
#define MCMCONTAINERSCHEMAACTIONSTOPBACKUPEXCLUDE_H

@class NSURL;
@protocol MCMContainerSchemaActionHasSinglePath;


#import "MCMContainerSchemaActionBase.h"

@interface MCMContainerSchemaActionStopBackupExclude : MCMContainerSchemaActionBase <MCMContainerSchemaActionHasSinglePath>

 {
    NSURL *_url;
}




+(id)actionIdentifier;
-(BOOL)performWithError:(*id)arg0 ;
-(id)description;
-(id)initWithPathArgument:(id)arg0 context:(id)arg1 ;


@end


#endif