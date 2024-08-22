// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCLSETTINGSSYNCCONTEXT_H
#define SCLSETTINGSSYNCCONTEXT_H

@class NSMutableArray, NSError, NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SCLSettingsSyncContext : NSObject <NSSecureCoding>

 {
    NSMutableArray *_recoveryHistory;
}


@property (retain, nonatomic) NSError *error; // ivar: _error
@property (copy, nonatomic) NSString *messageIdentifier; // ivar: _messageIdentifier
@property (readonly, nonatomic) NSArray *recoveryHistory;
@property (nonatomic) NSUInteger syncStatus; // ivar: _syncStatus


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)addRecoveryHistory:(NSUInteger)arg0 ;
-(void)clearRecoveryHistory;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif