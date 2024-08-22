// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDMCATIPROTOSERVICE_H
#define CDMCATIPROTOSERVICE_H

@class NSBundle, NSMutableArray;


#import "CDMDAGBaseService.h"

@interface CDMCATIProtoService : CDMDAGBaseService {
    NSBundle *_catiBundle;
    NSMutableArray *_childServices;
    NSInteger _assetVersion;
}




+(id)assetFolderNames;
+(id)trialFactorName;
-(BOOL)isEnabled;
-(NSInteger)getServiceState;
-(id)getChildServices;
-(id)handle:(id)arg0 ;
-(id)handleRequestCommandTypeNames;
-(id)setup:(id)arg0 ;
-(id)setupErrorResponse:(id)arg0 serviceState:(NSInteger)arg1 ;


@end


#endif