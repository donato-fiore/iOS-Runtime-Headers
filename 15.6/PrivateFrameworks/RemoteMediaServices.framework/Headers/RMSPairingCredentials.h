// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RMSPAIRINGCREDENTIALS_H
#define RMSPAIRINGCREDENTIALS_H


#import <Foundation/Foundation.h>


@interface RMSPairingCredentials : NSObject

@property (nonatomic) NSUInteger characterCount; // ivar: _characterCount
@property (nonatomic) NSUInteger requirementType; // ivar: _requirementType


-(id)initWithProtobuf:(id)arg0 ;
-(id)protobuf;


@end


#endif