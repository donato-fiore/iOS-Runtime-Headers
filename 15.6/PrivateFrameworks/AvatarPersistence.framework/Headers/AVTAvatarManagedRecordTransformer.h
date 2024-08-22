// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVTAVATARMANAGEDRECORDTRANSFORMER_H
#define AVTAVATARMANAGEDRECORDTRANSFORMER_H

@protocol AVTAvatarManagedRecordTransformer;

#import <Foundation/Foundation.h>


@interface AVTAvatarManagedRecordTransformer : NSObject <AVTAvatarManagedRecordTransformer>





-(id)identifierForManagedRecordIdentifier:(id)arg0 ;
-(id)managedRecordIdentifierForIdentifier:(id)arg0 ;
-(id)recordWithManagedRecord:(id)arg0 error:(*id)arg1 ;
-(void)updateManagedRecord:(id)arg0 withRecord:(id)arg1 ;


@end


#endif