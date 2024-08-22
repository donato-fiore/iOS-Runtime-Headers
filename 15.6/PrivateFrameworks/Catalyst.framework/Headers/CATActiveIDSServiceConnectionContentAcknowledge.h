// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CATACTIVEIDSSERVICECONNECTIONCONTENTACKNOWLEDGE_H
#define CATACTIVEIDSSERVICECONNECTIONCONTENTACKNOWLEDGE_H

@class NSDictionary;
@protocol CATActiveIDSServiceConnectionMessageContent;

#import <Foundation/Foundation.h>


@interface CATActiveIDSServiceConnectionContentAcknowledge : NSObject <CATActiveIDSServiceConnectionMessageContent>



@property (readonly, nonatomic) NSInteger contentType;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;


+(id)instanceWithDictionary:(id)arg0 ;


@end


#endif