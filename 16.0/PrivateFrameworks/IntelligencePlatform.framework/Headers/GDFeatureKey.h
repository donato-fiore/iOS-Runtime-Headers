// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GDFEATUREKEY_H
#define GDFEATUREKEY_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GDFeatureKey : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *featureName; // ivar: _featureName
@property (readonly, nonatomic) NSString *string;
@property (readonly, nonatomic) NSString *subidentifierName; // ivar: _subidentifierName
@property (readonly, nonatomic) NSString *viewName; // ivar: _viewName


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithViewName:(id)arg0 featureName:(id)arg1 subidentifierName:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif