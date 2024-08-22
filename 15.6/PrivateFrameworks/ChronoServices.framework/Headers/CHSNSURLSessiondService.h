// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHSNSURLSESSIONDSERVICE_H
#define CHSNSURLSESSIONDSERVICE_H

@protocol CHSChronoWidgetServiceServer;

#import <Foundation/Foundation.h>


@interface CHSNSURLSessiondService : NSObject

@property (readonly, nonatomic) NSObject<CHSChronoWidgetServiceServer> *server; // ivar: _server


-(id)URLSessionDidCompleteForExtensionWithBundleIdentifier:(id)arg0 info:(id)arg1 ;
-(id)init;
-(id)initWithServer:(id)arg0 ;


@end


#endif