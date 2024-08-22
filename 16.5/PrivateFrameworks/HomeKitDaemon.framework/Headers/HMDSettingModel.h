// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDSETTINGMODEL_H
#define HMDSETTINGMODEL_H

@class HMBModel, NSData, NSString, NSUUID, NSNumber;
@protocol HMDSettingModelProtocol;



@interface HMDSettingModel : HMBModel <HMDSettingModelProtocol>



@property (copy, nonatomic) NSData *dataValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUUID *hmbModelID;
@property (readonly, nonatomic) NSUUID *hmbParentModelID;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *nameForKeyPath;
@property (copy, nonatomic) NSNumber *numberValue;
@property (copy, nonatomic) NSNumber *properties;
@property (copy, nonatomic) NSUUID *selectionIdentifier;
@property (copy, nonatomic) NSString *selectionValue;
@property (copy, nonatomic) NSString *stringValue;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSNumber *type;


+(id)hmbProperties;
-(BOOL)setSettingValue:(id)arg0 ;
-(id)copyWithNewParentModelID:(id)arg0 ;


@end


#endif