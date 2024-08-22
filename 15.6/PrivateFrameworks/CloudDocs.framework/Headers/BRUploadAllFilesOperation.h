// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRUPLOADALLFILESOPERATION_H
#define BRUPLOADALLFILESOPERATION_H



#import "BROperation.h"
#import "BRContainer.h"

@interface BRUploadAllFilesOperation : BROperation {
    BRContainer *_container;
}


@property (copy) id *uploadAllFilesCompletion; // ivar: _uploadAllFilesCompletion


-(id)init;
-(id)initWithContainer:(id)arg0 ;
-(void)finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)main;


@end


#endif