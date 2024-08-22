// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAPERSISTENCESTORE_H
#define SAPERSISTENCESTORE_H

@class NSMutableDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SAPersistenceStore : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSMutableDictionary *monitoringSessionRecord; // ivar: _monitoringSessionRecord


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif