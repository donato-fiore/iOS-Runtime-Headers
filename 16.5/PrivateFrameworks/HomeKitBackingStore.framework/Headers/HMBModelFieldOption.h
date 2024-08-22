// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMBMODELFIELDOPTION_H
#define HMBMODELFIELDOPTION_H

@class HMFObject;



@interface HMBModelFieldOption : HMFObject



+(id)encryptedExternalRecordField:(id)arg0 ;
+(id)excludeFromCloudStorage;
+(id)externalRecordField:(id)arg0 ;
+(id)queryableField;
// +(id)queryableFieldWithEncodeBlock:(id)arg0 decodeBlock:(unk)arg1  ;
// +(id)queryableFieldWithEncodeBlock:(id)arg0 decodeBlock:(unk)arg1 descriptionBlock:(id)arg2  ;
-(void)applyTo:(id)arg0 ;


@end


#endif