// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CTXPCCONTEXTS_H
#define CTXPCCONTEXTS_H

@class NSUUID, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTXPCContexts : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSUUID *dataPreferred; // ivar: _dataPreferred
@property (retain, nonatomic) NSArray *subscriptions; // ivar: _subscriptions
@property (retain, nonatomic) NSUUID *voicePreferred; // ivar: _voicePreferred


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)findForAccount:(id)arg0 ;
-(id)findForSlot:(NSInteger)arg0 ;
-(id)findForUuid:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif