// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CATACTIVEIDSSERVICECONNECTIONCONTENTKEEPALIVE_H
#define CATACTIVEIDSSERVICECONNECTIONCONTENTKEEPALIVE_H

@class NSDictionary;
@protocol CATActiveIDSServiceConnectionMessageContent;

#import <Foundation/Foundation.h>


@interface CATActiveIDSServiceConnectionContentKeepAlive : NSObject <CATActiveIDSServiceConnectionMessageContent>



@property (readonly, nonatomic) NSInteger contentType;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;


+(id)instanceWithDictionary:(id)arg0 ;


@end


#endif