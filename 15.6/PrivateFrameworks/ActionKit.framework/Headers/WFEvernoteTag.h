// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFEVERNOTETAG_H
#define WFEVERNOTETAG_H

@class NSString, NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFEvernoteTag : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *guid; // ivar: _guid
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSString *parentGuid; // ivar: _parentGuid
@property (retain, nonatomic) NSNumber *updateSequenceNum; // ivar: _updateSequenceNum


+(BOOL)supportsSecureCoding;
+(void)initialize;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithGUID:(id)arg0 name:(id)arg1 parentGuid:(id)arg2 updateSequenceNum:(id)arg3 ;
-(id)initWithTag:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif