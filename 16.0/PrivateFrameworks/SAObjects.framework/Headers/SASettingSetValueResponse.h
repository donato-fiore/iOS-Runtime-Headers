// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SASETTINGSETVALUERESPONSE_H
#define SASETTINGSETVALUERESPONSE_H

@class NSString;
@protocol SASettingSupplier;


#import "SASettingResponse.h"
#import "SASettingEntity.h"

@interface SASettingSetValueResponse : SASettingResponse <SASettingSupplier>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SASettingEntity *setting;
@property (readonly) Class superclass;


+(id)setValueResponse;
+(id)setValueResponseWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif