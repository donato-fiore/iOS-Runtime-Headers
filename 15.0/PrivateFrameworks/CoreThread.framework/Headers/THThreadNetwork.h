// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef THTHREADNETWORK_H
#define THTHREADNETWORK_H

@class NSData, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface THThreadNetwork : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSData *extendedPANID; // ivar: _extendedPANID
@property (readonly, nonatomic) NSString *networkName; // ivar: _networkName


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 extendedPANID:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif