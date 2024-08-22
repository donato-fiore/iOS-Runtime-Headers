// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTIDINFO_H
#define MTIDINFO_H

@class NSDate, NSString, NSNumber, NSDictionary;
@protocol MTID;

#import <Foundation/Foundation.h>

#import "MTIDScheme.h"
#import "MTIDSecret.h"

@interface MTIDInfo : NSObject <MTID>



@property (retain, nonatomic) NSDate *computedDate; // ivar: _computedDate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSNumber *dsId; // ivar: _dsId
@property (copy, nonatomic) NSDate *effectiveDate; // ivar: _effectiveDate
@property (copy, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *idNamespace;
@property (copy, nonatomic) NSString *idString; // ivar: _idString
@property (readonly, nonatomic) NSInteger idType;
@property (nonatomic) BOOL isSynchronized; // ivar: _isSynchronized
@property (readonly, nonatomic) CGFloat lifespan;
@property (readonly, copy, nonatomic) NSDictionary *metricsFields;
@property (retain, nonatomic) MTIDScheme *scheme; // ivar: _scheme
@property (retain, nonatomic) MTIDSecret *secret; // ivar: _secret
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isValueExpired;
-(id)debugInfo;
-(id)initWithScheme:(id)arg0 secret:(id)arg1 idString:(id)arg2 dsId:(id)arg3 effectiveDate:(id)arg4 expirationDate:(id)arg5 ;


@end


#endif