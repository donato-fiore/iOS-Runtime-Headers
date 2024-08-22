// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNPROPERTYFACETIMEACTION_H
#define CNPROPERTYFACETIMEACTION_H

@protocol CNPropertyBestIDSValueQueryDelegate;


#import "CNPropertyAction.h"
#import "CNPropertyBestIDSValueQuery.h"

@interface CNPropertyFaceTimeAction : CNPropertyAction <CNPropertyBestIDSValueQueryDelegate>



@property (retain, nonatomic) CNPropertyBestIDSValueQuery *bestFaceTimeQuery; // ivar: _bestFaceTimeQuery
@property (nonatomic) NSInteger type; // ivar: _type


-(BOOL)canPerformAction;
-(id)initWithContact:(id)arg0 propertyItems:(id)arg1 ;
-(void)_queryFaceTimeStatus;
-(void)dealloc;
-(void)performActionForItem:(id)arg0 sender:(id)arg1 ;
-(void)queryComplete;


@end


#endif