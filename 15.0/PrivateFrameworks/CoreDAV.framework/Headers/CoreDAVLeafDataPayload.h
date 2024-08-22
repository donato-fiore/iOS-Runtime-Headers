// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef COREDAVLEAFDATAPAYLOAD_H
#define COREDAVLEAFDATAPAYLOAD_H

@class NSArray, NSData, NSString, NSURL;
@protocol CoreDAVLeafDataPayload;

#import <Foundation/Foundation.h>


@interface CoreDAVLeafDataPayload : NSObject <CoreDAVLeafDataPayload>



@property (readonly, nonatomic) NSArray *childrenOrder;
@property (readonly, nonatomic) NSData *dataPayload; // ivar: _dataPayload
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSURL *destinationURL;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSURL *serverID; // ivar: _serverID
@property (retain, nonatomic) NSURL *sourceURL;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *syncKey; // ivar: _syncKey


-(id)initWithURL:(id)arg0 eTag:(id)arg1 dataPayload:(id)arg2 inContainerWithURL:(id)arg3 withAccountInfoProvider:(id)arg4 ;


@end


#endif