// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CATINITIALIZINGIDSSERVICECONNECTIONCONTENTREJECT_H
#define CATINITIALIZINGIDSSERVICECONNECTIONCONTENTREJECT_H

@class NSUUID, NSDictionary, NSError;
@protocol CATInitializingIDSServiceConnectionMessageContent;

#import <Foundation/Foundation.h>


@interface CATInitializingIDSServiceConnectionContentReject : NSObject <CATInitializingIDSServiceConnectionMessageContent>



@property (readonly, nonatomic) NSUUID *connectionIdentifier; // ivar: _connectionIdentifier
@property (readonly, nonatomic) NSInteger contentType;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (retain, nonatomic) NSError *error; // ivar: _error


+(id)instanceWithDictionary:(id)arg0 ;
-(id)initWithConnectionIdentifier:(id)arg0 error:(id)arg1 ;


@end


#endif