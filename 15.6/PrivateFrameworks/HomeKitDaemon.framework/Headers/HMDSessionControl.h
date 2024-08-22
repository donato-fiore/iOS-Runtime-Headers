// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDSESSIONCONTROL_H
#define HMDSESSIONCONTROL_H

@class HAPTLVBase, NSUUID;
@protocol HAPTLVCreateParse, NSSecureCoding;



@interface HMDSessionControl : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>



@property (readonly, nonatomic) NSUInteger controlCommand; // ivar: _controlCommand
@property (readonly, copy, nonatomic) NSUUID *sessionID; // ivar: _sessionID


+(BOOL)supportsSecureCoding;
-(BOOL)_parseFromTLVData;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCommand:(NSUInteger)arg0 sessionIdentifier:(id)arg1 ;
-(id)tlvData;
-(void)description:(id)arg0 indent:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif