// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKPLACEHOLDERMIGRATOR_H
#define MKPLACEHOLDERMIGRATOR_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "MKAppSearchRequest.h"

@interface MKPlaceholderMigrator : NSObject {
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