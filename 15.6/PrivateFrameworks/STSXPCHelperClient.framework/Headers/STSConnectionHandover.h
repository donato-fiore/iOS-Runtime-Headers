// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STSCONNECTIONHANDOVER_H
#define STSCONNECTIONHANDOVER_H

@class NSMutableArray, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface STSConnectionHandover : NSObject <NSSecureCoding>

 {
    NSMutableArray *_alternativeCarriers;
}


@property (readonly, nonatomic) NSArray *alternativeCarriers;
@property (readonly, nonatomic) NSUInteger majorVersion; // ivar: _majorVersion
@property (readonly, nonatomic) NSUInteger minorVersion; // ivar: _minorVersion


+(BOOL)supportsSecureCoding;
+(id)_connectionHandoverWithNdefMessage:(id)arg0 ;
+(id)_createNdefWithType:(NSInteger)arg0 alternativeCarriers:(id)arg1 errorRecord:(id)arg2 ;
+(id)connectionHandoverWithData:(id)arg0 ;
+(id)requestWithAlternativeCarriers:(id)arg0 ;
+(id)selectWithAlternativeCarriers:(id)arg0 error:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)addAlternativeCarrier:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif