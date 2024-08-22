// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKFETCHSETTINGSUIVISIBILITYRESULTOBJECT_H
#define CRKFETCHSETTINGSUIVISIBILITYRESULTOBJECT_H

@class CATTaskResultObject;



@interface CRKFetchSettingsUIVisibilityResultObject : CATTaskResultObject

@property (nonatomic) BOOL settingsUIVisible; // ivar: _settingsUIVisible


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif