// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef KNANIMPARAMETERSAVEDGROUP_H
#define KNANIMPARAMETERSAVEDGROUP_H

@class NSString, NSMutableDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface KNAnimParameterSavedGroup : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSMutableDictionary *parameters; // ivar: _parameters
@property (copy, nonatomic) NSString *version; // ivar: _version


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)parameterForName:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif