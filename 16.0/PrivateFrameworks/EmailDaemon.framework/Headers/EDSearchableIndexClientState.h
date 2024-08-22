// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDSEARCHABLEINDEXCLIENTSTATE_H
#define EDSEARCHABLEINDEXCLIENTSTATE_H

@class NSNumber, NSString, NSDate;

#import <Foundation/Foundation.h>


@interface EDSearchableIndexClientState : NSObject {
    NSNumber *_transactionValue;
}


@property (copy, nonatomic) NSString *systemBuildVersion; // ivar: _systemBuildVersion
@property (nonatomic) NSInteger transaction; // ivar: _transaction
@property (retain, nonatomic) NSDate *transactionDate; // ivar: _transactionDate
@property (readonly, nonatomic) NSNumber *transactionValue;


+(id)clientState;
+(id)clientStateFromData:(id)arg0 ;
-(id)archiveRepresentation;
-(id)description;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;
-(void)addTransactionValueToAttributeSet:(id)arg0 ;


@end


#endif