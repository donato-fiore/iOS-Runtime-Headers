// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUCOREEVENTREPORTERACTIVE_H
#define SUCOREEVENTREPORTERACTIVE_H

@class NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SUCoreEventReporterActive : NSObject <NSSecureCoding>



@property (nonatomic) NSInteger attemptedSendCount; // ivar: _attemptedSendCount
@property (nonatomic) NSInteger discoveredCancelingCount; // ivar: _discoveredCancelingCount
@property (nonatomic) NSInteger discoveredRunningCount; // ivar: _discoveredRunningCount
@property (nonatomic) NSInteger discoveredSuspendedCount; // ivar: _discoveredSuspendedCount
@property (nonatomic) NSInteger failedSendCount; // ivar: _failedSendCount
@property (retain, nonatomic) NSURL *serverURL; // ivar: _serverURL


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copy;
-(id)description;
-(id)initFromArchivedData:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithServerURL:(id)arg0 ;
-(id)summary;
-(id)toArchivedData;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif