// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef XCTDAEMONCONNECTIONPROVIDER_H
#define XCTDAEMONCONNECTIONPROVIDER_H

@class NSString;
@protocol XCTDaemonConnectionProvider;

#import <Foundation/Foundation.h>


@interface XCTDaemonConnectionProvider : NSObject <XCTDaemonConnectionProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)makeNewDaemonConnectionWithServiceName:(id)arg0 ;


@end


#endif