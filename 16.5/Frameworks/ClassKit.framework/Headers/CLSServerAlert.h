// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSSERVERALERT_H
#define CLSSERVERALERT_H

@class NSDictionary, NSString, NSArray;


#import "CLSObject.h"

@interface CLSServerAlert : CLSObject {
    NSInteger _displayedCount;
}


@property (nonatomic) NSInteger alertType; // ivar: _alertType
@property (copy, nonatomic) NSDictionary *defaultButtonInfo; // ivar: _defaultButtonInfo
@property (nonatomic) NSInteger displayRoles; // ivar: _displayRoles
@property (nonatomic) NSInteger displayedCount;
@property (copy, nonatomic) NSString *message; // ivar: _message
@property (copy, nonatomic) NSArray *otherButtonInfos; // ivar: _otherButtonInfos
@property (copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(id)_init;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif