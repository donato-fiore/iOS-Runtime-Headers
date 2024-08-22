// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFSMTPRESPONSE_H
#define MFSMTPRESPONSE_H

@class NSArray, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MFSMTPResponse : NSObject <NSCopying>

 {
    id *_lastResponseLine;
}


@property (retain, nonatomic) NSArray *continuationResponses; // ivar: _continuationResponses
@property (readonly, nonatomic) NSUInteger status; // ivar: _status
@property (readonly, nonatomic) unsigned int statusClass; // ivar: _statusClass
@property (readonly, nonatomic) unsigned int statusDetail; // ivar: _statusDetail
@property (readonly, nonatomic) NSString *statusString; // ivar: _statusString
@property (readonly, nonatomic) unsigned int statusSubject; // ivar: _statusSubject


-(NSInteger)failureReason;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)errorMessageWithAddress:(id)arg0 defaultMessage:(id)arg1 ;
-(id)initWithStatus:(NSUInteger)arg0 ;
-(id)lastResponseLine;
-(void)_updateEnhancedStatusCodesFromLastResponse;
-(void)setLastResponseLine:(id)arg0 ;


@end


#endif