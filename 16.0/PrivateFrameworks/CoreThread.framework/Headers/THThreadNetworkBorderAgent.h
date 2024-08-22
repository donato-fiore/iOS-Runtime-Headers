// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef THTHREADNETWORKBORDERAGENT_H
#define THTHREADNETWORKBORDERAGENT_H

@class NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface THThreadNetworkBorderAgent : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSData *discriminatorId; // ivar: _discriminatorId


+(BOOL)supportsSecureCoding;
-(id)initWithBaDiscrId:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif