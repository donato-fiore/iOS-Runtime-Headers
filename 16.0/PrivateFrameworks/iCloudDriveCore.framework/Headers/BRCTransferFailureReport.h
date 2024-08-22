// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRCTRANSFERFAILUREREPORT_H
#define BRCTRANSFERFAILUREREPORT_H

@class NSError, NSDate, NSDictionary;

#import <Foundation/Foundation.h>


@interface BRCTransferFailureReport : NSObject

@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSDate *lastFailureDate; // ivar: _lastFailureDate
@property (readonly, nonatomic) NSDictionary *privateDBErrorCountByPCSState; // ivar: _privateDBErrorCountByPCSState
@property (readonly, nonatomic) NSDictionary *shareDBErrorCountByPCSState; // ivar: _shareDBErrorCountByPCSState


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToTransferFailureReport:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithError:(id)arg0 ;
-(void)encounteredErrorWithPCSState:(unsigned int)arg0 privateDB:(BOOL)arg1 atDate:(id)arg2 ;
-(void)encounteredErrors:(NSUInteger)arg0 atDate:(id)arg1 ;


@end


#endif