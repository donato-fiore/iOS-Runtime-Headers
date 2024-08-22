// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _WBSPARSECARRAYSCHEMA_H
#define _WBSPARSECARRAYSCHEMA_H



#import "WBSParsecSchema.h"

@interface _WBSParsecArraySchema : WBSParsecSchema

@property (retain, nonatomic) WBSParsecSchema *elementSchema; // ivar: _elementSchema


-(BOOL)_validateChild:(id)arg0 ofParent:(id)arg1 withParentAssociatedError:(id)arg2 errorHandler:(id)arg3 ;
-(id)initWithElementSchema:(id)arg0 associatedError:(id)arg1 isOptional:(BOOL)arg2 ;


@end


#endif