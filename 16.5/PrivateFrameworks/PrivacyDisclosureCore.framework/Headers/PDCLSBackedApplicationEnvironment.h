// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PDCLSBACKEDAPPLICATIONENVIRONMENT_H
#define PDCLSBACKEDAPPLICATIONENVIRONMENT_H

@class LSApplicationWorkspace, NSEnumerator, NSString;
@protocol PDCApplicationEnvironment;

#import <Foundation/Foundation.h>


@interface PDCLSBackedApplicationEnvironment : NSObject <PDCApplicationEnvironment>

 {
    LSApplicationWorkspace *_workspace;
}


@property (readonly, copy, nonatomic) NSEnumerator *allApplications;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)applicationIdentityForIdentityString:(id)arg0 ;
-(id)applicationRecordForBundleIdentifier:(id)arg0 ;
-(id)init;
-(id)monitorAppEventsWithDelegate:(id)arg0 onQueue:(id)arg1 ;


@end


#endif