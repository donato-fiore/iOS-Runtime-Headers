// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef COHOMEKITCOLLECTIONSETTINGUPDATEREQUEST_H
#define COHOMEKITCOLLECTIONSETTINGUPDATEREQUEST_H

@class NSArray;


#import "COMeshRequest.h"
#import "CODistantAccessoryCollectionSetting.h"

@interface COHomeKitCollectionSettingUpdateRequest : COMeshRequest

@property (readonly, copy, nonatomic) NSArray *originalItems; // ivar: _originalItems
@property (readonly, copy, nonatomic) NSArray *replacementItems; // ivar: _replacementItems
@property (readonly, copy, nonatomic) CODistantAccessoryCollectionSetting *setting; // ivar: _setting


+(BOOL)supportsSecureCoding;
-(id)initWithAccessoryCollectionSetting:(id)arg0 replaceItems:(id)arg1 withItems:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif