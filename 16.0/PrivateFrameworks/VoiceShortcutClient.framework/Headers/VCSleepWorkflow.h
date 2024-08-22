// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCSLEEPWORKFLOW_H
#define VCSLEEPWORKFLOW_H

@class NSArray, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface VCSleepWorkflow : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSArray *actions; // ivar: _actions
@property (readonly, copy, nonatomic) NSString *bundleIdentifierForDisplay;
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy, nonatomic) NSString *summaryString; // ivar: _summaryString


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithActions:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif