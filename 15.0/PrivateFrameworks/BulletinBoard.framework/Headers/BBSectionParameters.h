// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BBSECTIONPARAMETERS_H
#define BBSECTIONPARAMETERS_H

@class NSUUID, NSMutableDictionary, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "BBSectionSubtypeParameters.h"
#import "BBSectionIcon.h"

@interface BBSectionParameters : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (retain, nonatomic) NSMutableDictionary *allSubtypeParameters; // ivar: _allSubtypeParameters
@property (retain, nonatomic) BBSectionSubtypeParameters *defaultSubtypeParameters; // ivar: _defaultSubtypeParameters
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (retain, nonatomic) BBSectionIcon *icon; // ivar: _icon
@property (nonatomic) NSUInteger messageNumberOfLines; // ivar: _messageNumberOfLines
@property (nonatomic) BOOL orderSectionUsingRecencyDate; // ivar: _orderSectionUsingRecencyDate
@property (nonatomic) BOOL showsDateInFloatingLockScreenAlert; // ivar: _showsDateInFloatingLockScreenAlert
@property (nonatomic) BOOL showsSubtitle; // ivar: _showsSubtitle
@property (nonatomic) BOOL usesVariableLayout; // ivar: _usesVariableLayout


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)allSubtypes;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)parametersForSubtype:(NSInteger)arg0 ;
-(id)replacementObjectForCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif