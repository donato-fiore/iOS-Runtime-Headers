// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DMFFETCHCONFIGURATIONSOURCESYNCTOKENRESULTOBJECT_H
#define DMFFETCHCONFIGURATIONSOURCESYNCTOKENRESULTOBJECT_H

@class CATTaskResultObject, NSString;



@interface DMFFetchConfigurationSourceSyncTokenResultObject : CATTaskResultObject

@property (copy, nonatomic) NSString *syncToken; // ivar: _syncToken


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif