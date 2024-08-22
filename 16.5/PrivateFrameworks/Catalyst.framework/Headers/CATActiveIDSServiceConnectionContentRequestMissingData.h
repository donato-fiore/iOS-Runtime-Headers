// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CATACTIVEIDSSERVICECONNECTIONCONTENTREQUESTMISSINGDATA_H
#define CATACTIVEIDSSERVICECONNECTIONCONTENTREQUESTMISSINGDATA_H

@class NSDictionary;
@protocol CATActiveIDSServiceConnectionMessageContent;

#import <Foundation/Foundation.h>


@interface CATActiveIDSServiceConnectionContentRequestMissingData : NSObject <CATActiveIDSServiceConnectionMessageContent>



@property (readonly, nonatomic) NSInteger contentType;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly, nonatomic) NSUInteger expectedSequenceNumber; // ivar: _expectedSequenceNumber


+(id)instanceWithDictionary:(id)arg0 ;
-(id)initWithExpectedSequenceNumber:(NSUInteger)arg0 ;


@end


#endif