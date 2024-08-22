// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NSPERSISTENTHISTORYTOKEN_H
#define _NSPERSISTENTHISTORYTOKEN_H

@class NSDictionary;


#import "NSPersistentHistoryToken.h"

@interface _NSPersistentHistoryToken : NSPersistentHistoryToken {
    NSDictionary *_storeTokens;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSInteger)compareToken:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)storeTokens;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif