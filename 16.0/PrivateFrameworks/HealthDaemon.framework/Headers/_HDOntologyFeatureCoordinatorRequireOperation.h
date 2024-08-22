// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HDONTOLOGYFEATURECOORDINATORREQUIREOPERATION_H
#define _HDONTOLOGYFEATURECOORDINATORREQUIREOPERATION_H

@class NSArray;


#import "HDJournalableOperation.h"

@interface _HDOntologyFeatureCoordinatorRequireOperation : HDJournalableOperation {
    NSArray *_items;
}




+(BOOL)supportsSecureCoding;
-(BOOL)performWithProfile:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif