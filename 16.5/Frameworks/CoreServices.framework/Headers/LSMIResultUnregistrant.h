// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LSMIRESULTUNREGISTRANT_H
#define LSMIRESULTUNREGISTRANT_H

@class NSUUID, NSString;
@protocol LSMIResultRegistrantStrategy;

#import <Foundation/Foundation.h>

#import "LSPrecondition.h"

@interface LSMIResultUnregistrant : NSObject {
    id<LSMIResultRegistrantStrategy> *_strategy;
    NSUUID *_uuid;
    NSString *_bundleID;
    LSPrecondition *_precondition;
    unsigned int _type;
}




-(id)initWithContext:(id)arg0 operationUUID:(id)arg1 bundleIdentifier:(id)arg2 precondition:(id)arg3 type:(unsigned int)arg4 ;
-(void)runWithCompletion:(id)arg0 ;


@end


#endif