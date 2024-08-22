// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MCUIPAYLOADUSERINPUTFIELD_H
#define MCUIPAYLOADUSERINPUTFIELD_H

@class NSMutableDictionary, NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface MCUIPayloadUserInputField : NSObject {
    NSMutableDictionary *_fieldDictionary;
    id *_response;
}


@property (readonly, nonatomic) NSInteger capitalizationType;
@property (readonly, nonatomic) NSString *defaultValue;
@property (retain, nonatomic) NSString *fieldDescription;
@property (retain, nonatomic) NSString *finePrint;
@property (readonly, nonatomic) int flags;
@property (readonly, nonatomic) BOOL isDevicePasscodeField;
@property (readonly, nonatomic) BOOL isPassword;
@property (readonly, nonatomic) BOOL isRequired;
@property (readonly, nonatomic) NSInteger keyboardType;
@property (readonly, nonatomic) NSNumber *minimumLength;
@property (readonly, nonatomic) NSString *mismatchDescription;
@property (readonly, nonatomic) BOOL needsRetype;
@property (readonly, nonatomic) NSString *placeholderValue;
@property (readonly, nonatomic) NSString *retypeDescription;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) int type;


-(id)_uuid;
-(id)description;
-(id)initWithFieldDictionary:(id)arg0 ;
-(id)responseDictionary;
-(void)setUserResponse:(id)arg0 ;


@end


#endif