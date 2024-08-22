// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DARESOLVEDRECIPIENT_H
#define DARESOLVEDRECIPIENT_H

@class NSMutableDictionary, NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface DAResolvedRecipient : NSObject

@property (nonatomic) NSInteger availabilityStatus; // ivar: _availabilityStatus
@property (nonatomic) NSInteger certificatesStatus; // ivar: _certificatesStatus
@property (retain, nonatomic) NSMutableDictionary *mResolvedEmailToX509Certs; // ivar: _mResolvedEmailToX509Certs
@property (retain, nonatomic) NSString *mergedFreeBusy; // ivar: _mergedFreeBusy
@property (readonly, nonatomic) NSDictionary *resolvedEmailToX509Certs;
@property (nonatomic) NSInteger status; // ivar: _status


-(id)description;
-(void)addCert:(id)arg0 forEmailAddress:(id)arg1 ;


@end


#endif