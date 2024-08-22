// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFGRANULARACCESSRESOURCEPERWORKFLOWSTATEENTRY_H
#define WFGRANULARACCESSRESOURCEPERWORKFLOWSTATEENTRY_H

@class NSNumber;
@protocol NSSecureCoding, NSObject><NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFGranularAccessResourcePerWorkflowStateEntry : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSNumber *authorized; // ivar: _authorized
@property (readonly, nonatomic) NSObject<NSObject><NSSecureCoding> *value; // ivar: _value


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)entryBySettingAuthorized:(BOOL)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithValue:(id)arg0 ;
-(id)initWithValue:(id)arg0 authorized:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif