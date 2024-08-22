// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDMPLUMSERVICE_H
#define CDMPLUMSERVICE_H

@class UPPLNerHandler;


#import "CDMDAGBaseService.h"

@interface CDMPlumService : CDMDAGBaseService {
    UPPLNerHandler *_plumHandler;
}




+(id)assetFolderName;
+(id)trialFactorName;
-(BOOL)isEnabled;
-(id)handle:(id)arg0 ;
-(id)handleRequestCommandTypeNames;
-(id)setup:(id)arg0 ;


@end


#endif