// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSPCLOUDCLIENTREGISTRATIONRECORD_H
#define MSPCLOUDCLIENTREGISTRATIONRECORD_H

@class NSUUID, NSDate;

#import <Foundation/Foundation.h>


@interface MSPCloudClientRegistrationRecord : NSObject

@property (retain, nonatomic) NSUUID *clientIdentifier; // ivar: _clientIdentifier
@property (nonatomic) NSUInteger desiredEpoch; // ivar: _desiredEpoch
@property (nonatomic) NSUInteger earliestCompatibleEpoch; // ivar: _earliestCompatibleEpoch
@property (readonly, nonatomic) BOOL isChanged; // ivar: _isChanged
@property (retain, nonatomic) NSDate *lastRegistrationDate; // ivar: _lastRegistrationDate


-(id)initWithClientIdentifier:(id)arg0 ;
-(id)initWithRecord:(id)arg0 ;
-(id)recordRepresentation;


@end


#endif