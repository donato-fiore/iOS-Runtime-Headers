// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRAVOUTPUTCONTEXTMODIFICATION_H
#define MRAVOUTPUTCONTEXTMODIFICATION_H

@class NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MRAVOutputContextModification : NSObject <NSSecureCoding>

 {
    NSString *_identifier;
}


@property (readonly, nonatomic) NSArray *avOutputDevices; // ivar: _avOutputDevices
@property (readonly, nonatomic) NSArray *concreteOutputDevices; // ivar: _concreteOutputDevices
@property (copy, nonatomic) NSString *initiator; // ivar: _initiator
@property (readonly, nonatomic) NSUInteger modificationType; // ivar: _modificationType
@property (readonly, nonatomic) NSArray *outputDeviceUIDs;
@property (readonly, nonatomic) NSArray *outputDevices; // ivar: _outputDevices
@property (copy, nonatomic) NSString *password; // ivar: _password
@property (nonatomic) BOOL shouldFadeAudio; // ivar: _shouldFadeAudio


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSUInteger)arg0 devices:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)modifyWithOutputContext:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;


@end


#endif