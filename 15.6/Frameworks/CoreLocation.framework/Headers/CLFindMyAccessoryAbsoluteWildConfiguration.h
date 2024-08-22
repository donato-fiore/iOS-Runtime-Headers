// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLFINDMYACCESSORYABSOLUTEWILDCONFIGURATION_H
#define CLFINDMYACCESSORYABSOLUTEWILDCONFIGURATION_H

@class NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CLFindMyAccessoryAbsoluteWildConfiguration : NSObject <NSSecureCoding>



@property (readonly) NSDate *desiredKeyRollDate; // ivar: _desiredKeyRollDate
@property (readonly) unsigned int nextWildIndex; // ivar: _nextWildIndex


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)encodeConfiguration;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDesiredNextKeyRollDate:(id)arg0 nextWildIndex:(unsigned int)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif