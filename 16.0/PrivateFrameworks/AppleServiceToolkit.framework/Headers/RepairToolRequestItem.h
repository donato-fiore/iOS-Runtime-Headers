// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REPAIRTOOLREQUESTITEM_H
#define REPAIRTOOLREQUESTITEM_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface RepairToolRequestItem : NSObject

@property (retain, nonatomic) NSString *destination; // ivar: _destination
@property (retain, nonatomic) NSString *encryptionKey; // ivar: _encryptionKey
@property (retain, nonatomic) NSDictionary *extraHeaders; // ivar: _extraHeaders
@property (retain, nonatomic) NSString *token; // ivar: _token


-(id)initWithDestination:(id)arg0 andEncryptionKey:(id)arg1 andToken:(id)arg2 andExtraHeaders:(id)arg3 ;


@end


#endif