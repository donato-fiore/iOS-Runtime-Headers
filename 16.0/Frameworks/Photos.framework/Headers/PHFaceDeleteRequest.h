// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHFACEDELETEREQUEST_H
#define PHFACEDELETEREQUEST_H



#import "PHObjectDeleteRequest.h"

@interface PHFaceDeleteRequest : PHObjectDeleteRequest



-(BOOL)validateForDeleteManagedObject:(id)arg0 error:(*id)arg1 ;
-(void)deleteManagedObject:(id)arg0 photoLibrary:(id)arg1 ;


@end


#endif