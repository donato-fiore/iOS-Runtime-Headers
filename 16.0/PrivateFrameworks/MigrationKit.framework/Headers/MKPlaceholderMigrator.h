// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKPLACEHOLDERMIGRATOR_H
#define MKPLACEHOLDERMIGRATOR_H

@class NSMutableArray;


#import "MKMigrator.h"
#import "MKAppSearchRequest.h"

@interface MKPlaceholderMigrator : MKMigrator {
    NSMutableArray *_identifiers;
    MKAppSearchRequest *_request;
}




-(id)init;
-(void)didSearchForPlaceholder:(id)arg0 apps:(id)arg1 error:(id)arg2 ;
-(void)import:(id)arg0 ;
-(void)importDataEncodedInJSON:(id)arg0 ;
-(void)install:(id)arg0 apps:(id)arg1 error:(id)arg2 ;
-(void)remove;


@end


#endif