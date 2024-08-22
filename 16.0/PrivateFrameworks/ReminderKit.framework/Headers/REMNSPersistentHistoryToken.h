// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REMNSPERSISTENTHISTORYTOKEN_H
#define REMNSPERSISTENTHISTORYTOKEN_H

@class NSPersistentHistoryToken;


#import "REMChangeToken.h"

@interface REMNSPersistentHistoryToken : REMChangeToken

@property (readonly, nonatomic) NSPersistentHistoryToken *token; // ivar: _token


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compareToken:(id)arg0 error:(*id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPersistentHistoryToken:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif