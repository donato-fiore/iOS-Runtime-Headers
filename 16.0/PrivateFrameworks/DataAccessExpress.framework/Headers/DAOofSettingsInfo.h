// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DAOOFSETTINGSINFO_H
#define DAOOFSETTINGSINFO_H

@class NSString;
@protocol DAOofResponseDelegate;


#import "DAOofParams.h"

@interface DAOofSettingsInfo : DAOofParams

@property (weak, nonatomic) NSObject<DAOofResponseDelegate> *consumer; // ivar: _consumer
@property (retain, nonatomic) NSString *requestID; // ivar: _requestID




@end


#endif