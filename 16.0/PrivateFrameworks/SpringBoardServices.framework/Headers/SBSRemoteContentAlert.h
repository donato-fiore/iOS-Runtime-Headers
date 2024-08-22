// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSREMOTECONTENTALERT_H
#define SBSREMOTECONTENTALERT_H

@class NSMutableArray, NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SBSRemoteContentAlertAction.h"

@interface SBSRemoteContentAlert : NSObject <NSSecureCoding>

 {
    NSInteger _preferredStyle;
    NSMutableArray *_actions;
    SBSRemoteContentAlertAction *_preferredAction;
}


@property (readonly, nonatomic) NSArray *actions;
@property (copy, nonatomic) NSString *message; // ivar: _message
@property (readonly, nonatomic) NSInteger preferredStyle;
@property (copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitle:(id)arg0 message:(id)arg1 preferredStyle:(NSInteger)arg2 ;
-(void)addAction:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif