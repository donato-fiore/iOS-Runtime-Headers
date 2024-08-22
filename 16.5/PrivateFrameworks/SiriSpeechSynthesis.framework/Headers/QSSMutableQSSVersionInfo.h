// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QSSMUTABLEQSSVERSIONINFO_H
#define QSSMUTABLEQSSVERSIONINFO_H

@class NSString;


#import "QSSQSSVersionInfo.h"

@interface QSSMutableQSSVersionInfo : QSSQSSVersionInfo

@property (copy, nonatomic) NSString *qss_version_brane;
@property (copy, nonatomic) NSString *qss_version_server;
@property (copy, nonatomic) NSString *qss_version_serverkit;
@property (copy, nonatomic) NSString *qss_version_siritts;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif