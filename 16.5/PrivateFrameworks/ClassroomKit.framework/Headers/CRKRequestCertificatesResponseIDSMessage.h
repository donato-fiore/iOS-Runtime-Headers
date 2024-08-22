// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKREQUESTCERTIFICATESRESPONSEIDSMESSAGE_H
#define CRKREQUESTCERTIFICATESRESPONSEIDSMESSAGE_H

@class NSArray, NSDictionary, NSError, NSUUID;
@protocol CRKIDSMessage;

#import <Foundation/Foundation.h>


@interface CRKRequestCertificatesResponseIDSMessage : NSObject <CRKIDSMessage>



@property (readonly, nonatomic) NSArray *certificateDataCollection; // ivar: _certificateDataCollection
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSInteger messageType;
@property (readonly, nonatomic) NSUUID *requestIdentifier; // ivar: _requestIdentifier


+(id)instanceWithDictionary:(id)arg0 ;
-(id)initWithRequestIdentifier:(id)arg0 certificateDataCollection:(id)arg1 error:(id)arg2 ;


@end


#endif