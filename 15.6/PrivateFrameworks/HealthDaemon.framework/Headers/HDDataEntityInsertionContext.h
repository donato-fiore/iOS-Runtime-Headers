// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDDATAENTITYINSERTIONCONTEXT_H
#define HDDATAENTITYINSERTIONCONTEXT_H


#import <Foundation/Foundation.h>

#import "HDProfile.h"
#import "HDDataOriginProvenance.h"

@interface HDDataEntityInsertionContext : NSObject {
    HDProfile *_profile;
    CGFloat _defaultCreationDate;
}


@property (readonly, nonatomic) CGFloat creationDate; // ivar: _creationDate
@property (readonly, nonatomic) HDDataOriginProvenance *provenance; // ivar: _provenance
@property (readonly, nonatomic) BOOL resolveAssociations; // ivar: _resolveAssociations
@property (readonly, nonatomic) BOOL skipInsertionFilter; // ivar: _skipInsertionFilter


-(id)initWithProvenance:(id)arg0 creationDate:(CGFloat)arg1 skipInsertionFilter:(BOOL)arg2 resolveAssociations:(BOOL)arg3 profile:(id)arg4 ;
-(void)prepareObjectForInsertion:(id)arg0 ;


@end


#endif