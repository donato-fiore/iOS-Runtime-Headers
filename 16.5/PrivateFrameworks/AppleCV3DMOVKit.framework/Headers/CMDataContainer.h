// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMDATACONTAINER_H
#define CMDATACONTAINER_H

@class NSMutableArray, NSString, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CMDataContainer : NSObject <NSSecureCoding>

 {
    NSUInteger nextDataSent;
    NSUInteger nextDataRecv;
    NSUInteger nextMsgSent;
    NSUInteger nextMsgRecv;
    NSUInteger nextEvent;
}


@property (retain, nonatomic) NSMutableArray *cmDataRecv; // ivar: _cmDataRecv
@property (retain, nonatomic) NSMutableArray *cmDataSent; // ivar: _cmDataSent
@property (retain, nonatomic) NSMutableArray *cmEvents; // ivar: _cmEvents
@property (retain, nonatomic) NSMutableArray *cmMsgRecv; // ivar: _cmMsgRecv
@property (retain, nonatomic) NSMutableArray *cmMsgSent; // ivar: _cmMsgSent
@property (retain, nonatomic) NSString *cv3dVersion; // ivar: _cv3dVersion
@property (retain, nonatomic) NSString *cvPlayerVersion; // ivar: _cvPlayerVersion
@property (retain, nonatomic) NSString *deviceString; // ivar: _deviceString
@property (retain, nonatomic) NSString *iOSVersion; // ivar: _iOSVersion
@property (retain, nonatomic) NSString *macOSVersion; // ivar: _macOSVersion
@property (retain, nonatomic) NSNumber *sessionID; // ivar: _sessionID
@property (retain, nonatomic) NSString *version; // ivar: _version


+(BOOL)supportsSecureCoding;
+(id)classes;
-(id)grabNextDataRecv;
-(id)grabNextDataSent;
-(id)grabNextEvent;
-(id)grabNextMessageRecv;
-(id)grabNextMessageSent;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)appendCMData:(id)arg0 sending:(BOOL)arg1 ;
-(void)appendCMEvent:(id)arg0 ;
-(void)appendCMMessage:(id)arg0 sending:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)resetReader;


@end


#endif