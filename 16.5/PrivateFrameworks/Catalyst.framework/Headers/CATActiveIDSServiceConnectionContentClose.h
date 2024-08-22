// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CATACTIVEIDSSERVICECONNECTIONCONTENTCLOSE_H
#define CATACTIVEIDSSERVICECONNECTIONCONTENTCLOSE_H

@class NSDictionary, NSError;
@protocol CATActiveIDSServiceConnectionMessageContent;

#import <Foundation/Foundation.h>


@interface CATActiveIDSServiceConnectionContentClose : NSObject <CATActiveIDSServiceConnectionMessageContent>



@property (readonly, nonatomic) NSInteger contentType;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (retain, nonatomic) NSError *error; // ivar: _error


+(id)instanceWithDictionary:(id)arg0 ;
-(id)init;
-(id)initWithError:(id)arg0 ;


@end


#endif