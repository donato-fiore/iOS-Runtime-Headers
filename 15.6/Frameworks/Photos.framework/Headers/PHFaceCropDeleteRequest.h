// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHFACECROPDELETEREQUEST_H
#define PHFACECROPDELETEREQUEST_H



#import "PHObjectDeleteRequest.h"

@interface PHFaceCropDeleteRequest : PHObjectDeleteRequest



-(BOOL)validateForDeleteManagedObject:(id)arg0 error:(*id)arg1 ;
-(void)deleteManagedObject:(id)arg0 photoLibrary:(id)arg1 ;


@end


#endif