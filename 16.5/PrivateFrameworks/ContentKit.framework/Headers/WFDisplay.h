// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFDISPLAY_H
#define WFDISPLAY_H

@class NSString;
@protocol NSSecureCoding, WFNaming;

#import <Foundation/Foundation.h>


@interface WFDisplay : NSObject <NSSecureCoding, WFNaming>



@property (readonly, nonatomic) NSString *UUID; // ivar: _UUID
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSString *serializationUUID; // ivar: _serializationUUID
@property (readonly, copy, nonatomic) NSString *wfName;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDisplayUUID:(id)arg0 name:(id)arg1 ;
-(id)initWithDisplayUUID:(id)arg0 serializationUUID:(id)arg1 localizedName:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif